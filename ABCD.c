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

int main()
{
	int i,n;
	scanf("%d",&n);
	scanf("%*c");
	char ch1,ch2,ch3,ch4,prev;
	for(i=0;i<n;i++)
	{
		scanf("%c%c",&ch1,&ch2);
		if(ch1=='A' && ch2=='B'){ch3='D';ch4='C';}
		if(ch1=='A' && ch2=='C'){ch3='D';ch4='B';}
		if(ch1=='A' && ch2=='D'){ch3='B';ch4='C';}

		if(ch1=='B' && ch2=='A'){ch3='D';ch4='C';}
		if(ch1=='B' && ch2=='C'){ch3='D';ch4='A';}
		if(ch1=='B' && ch2=='D'){ch3='A';ch4='C';}


		if(ch1=='C' && ch2=='A'){ch3='D';ch4='B';}
		if(ch1=='C' && ch2=='B'){ch3='D';ch4='A';}
		if(ch1=='C' && ch2=='D'){ch3='A';ch4='B';}


		if(ch1=='D' && ch2=='A'){ch3='B';ch4='C';}
		if(ch1=='D' && ch2=='B'){ch3='A';ch4='C';}
		if(ch1=='D' && ch2=='C'){ch3='A';ch4='B';}

		if(ch3==prev)
		{
			prev=ch3;
			printf("%c%c",ch4,ch3);
		}
		else
		{
			prev=ch4;
			printf("%c%c",ch3,ch4);
		}
	}
	printf("\n");
	return 0;
}
// @mach18


