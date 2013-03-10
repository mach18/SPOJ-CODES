#include<stdio.h>
#include<string.h>
int sumarray[101];
int diffa[100];
int a1[100],a2[100];
int news[100],newd[100];
void sum()
{  
	int carry=0,i;
	for(i=99;i>=0;i--)
	{
		sumarray[i+1]=(a1[i]+a2[i]+carry)%10;
		carry=(a1[i]+a2[i]+carry)/10;
	}
	sumarray[0]=carry;
}
void diff()
{
	int borrow=0,i;
	for(i=99;i>=0;i--)
	{
		if(a1[i]>=a2[i])
		{
			diffa[i]=a1[i]-a2[i];
		}
		else
		{
			int t=i-1;
			while(a1[t]==0)
			{
				a1[t]=9;	
				t--;
			}
			diffa[i]=a1[i]+10-a2[i];
			a1[t]=a1[t]-1;
		}
	}
}
void divides(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(news[i]%2!=0)
			news[i+1]+=10;
		news[i]=news[i]/2;
	}
}

void divided(int n)
{int i;
	for(i=0;i<n;i++)
	{
		if(newd[i]%2!=0)
			newd[i+1]+=10;
		newd[i]=newd[i]/2;
	}
}
int main()
{	char c;
	int tc=10;
	int i;
	while(tc--)
	{	
	
	for(i=0;i<100;i++)
	{
		a1[i]=a2[i]=0;
	}
	scanf("%c",&c);
	int m=99;
	while(c!='\n'){
		a1[m--]=c-48;
		scanf("%c",&c);
	}
	int j,temp;
	int len=(100+(m+1))/2;
	int h=0;
	for(j=m+1;j<len;j++)
	{
		temp=a1[j];
		a1[j]=a1[99-h];
		a1[99-h]=temp;
		h++;
	}
	m=99;
	scanf("%c",&c);
	while(c!='\n'){
		a2[m--]=c-48;
		scanf("%c",&c);
	}
//	for(i=0;i<=99;i++)
//		printf("%d",a2[i]);
//	printf("\n");
	len=(100+(m+1))/2;
	h=0;
	for(j=m+1;j<len;j++)
	{
		temp=a2[j];
		a2[j]=a2[99-h];
		a2[99-h]=temp;
		h++;
	}
//	for(i=0;i<=99;i++)
//		printf("%d",a2[i]);
//	printf("\n");
	sum();
	diff();
	int q=0;
	while(sumarray[q++]==0){}
	int lens=0,lend=0;
	for(i=q-1;i<101;i++)
	{
		news[lens++]=sumarray[i];
	}
	q=0;
	while(diffa[q++]==0){}
	for(i=q-1;i<100;i++)
	{
//		printf("%d",diffa[i]);
		newd[lend++]=diffa[i];
	}
//	printf("\n");
	divides(lens);
	divided(lend);
	q=0;
	while(news[q++]==0){}
	for(i=q-1;i<lens;i++)
		printf("%d",news[i]);
	if(lens==0)
		printf("0");
	printf("\n");
	q=0;
	while(newd[q++]==0){}
	for(i=q-1;i<lend;i++)
		printf("%d",newd[i]);
	if(lend==0)
		printf("0");
	printf("\n");
	}
	return 0;
}

