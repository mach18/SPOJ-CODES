#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int merge(int a[],int left,int center,int right)
{
  int counter=0;
	int n1,n2,i;
	n1=center-left+1;
	n2=right-center;
	int c[n1+n2],aptr=left,bptr=center+1;
	for(i=0;i<n1+n2;i++)
	{	
		if(aptr!=center+1 && bptr!=right+1)
		{	
			if(a[aptr]<=a[bptr])
			{
				c[i]=a[aptr++];
			}
			else
			{
				counter+=(center-aptr)+1;
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
	return counter;
}
int mergesort(int a[],int left,int right)
{
	int center=left +(right-left)/2;
	int a1=0,a2=0,a3=0;
	if(left<right)
	{
		a1=mergesort(a,left,center);
		a2=mergesort(a,center+1,right);
		a3=merge(a,left,center,right);
	}
	return a1+a2+a3;
}
int main()
{
	int i,n,tc;
	scanf("%d",&tc);
	while(tc--)
	{
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int val=mergesort(a,0,n-1);
	printf("%d\n",val);
	}
	return 0;
}

