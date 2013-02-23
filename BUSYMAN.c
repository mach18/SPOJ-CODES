#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define REPi(i,a,b) for(i=a-1;i>=b;i--)
#define rep(i,b) REP(i,0,b)
#define repi(i,b) REPi(i,b,0)
#define si(n) scanf("%d",&n)
#define sort(arrr,n) qsort(arrr,n,sizeof(int),compare)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a<b?a:b)
#define pi(n) printf("%d\n",n)

void shellsort(int a[],int b[],int n)
{
	int i,j,k,temp,o,temp1;
	for(i=n/2;i>0;i/=2)
	{
		for(j=i;j<n;j++)
		{
			temp=a[j];
			temp1=b[j];
			for(k=j;k>=i;k-=i)
			{
				if(temp < a[k-i])
				{	
					a[k]=a[k-i];
					b[k]=b[k-i];
				}
				else
					break;
			}
			b[k]=temp1;
			a[k]=temp;
		}
	}
}


int main()
{
	int tc;
	si(tc);
	while(tc--)
	{
		int n;
		si(n);
		int a[n],b[n],i;
		rep(i,n)
		{
			si(b[i]);
			si(a[i]);
		}
		shellsort(a,b,n);
		int selected=1;
		int select_from=a[0];
		int start=0,end=0;
		rep(i,n)
		{
			if(b[i]>=select_from)
			{
				selected++;
				select_from=a[i];
			}
		}
		printf("%d\n",selected);
	}
	return 0;
}
// @mach18


