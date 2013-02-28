#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int counter=0;
void merge(int a[],int left,int center,int right)
{
  int n1,n2,i;
	n1=center-left+1;
	n2=right-center;
	int c[n1+n2],aptr=left,bptr=center+1;
	for(i=0;i<n1+n2;i++)
	{	
		if(aptr!=center+1 && bptr!=right+1)
		{	
			if(a[aptr]<a[bptr])
			{
				c[i]=a[aptr++];
			}
			else
			{
				c[i]=a[bptr++];
			}
		}
		else
			break;
	}
	while(bptr!=right+1)
	{	
		c[i++]=a[bptr++];
	}
	while(aptr!=center+1)
	{
		c[i++]=a[aptr++];
	}
	int k=0;
	for(i=left;i<=right;i++)
		a[i]=c[k++];
}
void mergesort(int a[],int left,int right)
{
	int center=(left+right)/2;
	if(left<right)
	{
		mergesort(a,left,center);
		mergesort(a,center+1,right);
		merge(a,left,center,right);
	}
}
int main()
{
int tc;
scanf("%d",&tc);
while(tc--)
{
	int n;
	scanf("%d",&n);
	int i,a[n],b[n],sum=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	mergesort(b,0,n-1);
	for(i=0;i<n;i++)
		sum+=a[i]*b[i];
	printf("%d\n",sum);
}
	return 0;
}

