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
#define pi(n) printf("%d  ",n)
int main()
{
	int tc;
	si(tc);
	while(tc--)
	{
		int m,n;
		si(n);
		si(m);
		if(n-m & (m-1)>> 1)
			printf("0\n");
		else
			printf("1\n");

	}
	return 0;
}


