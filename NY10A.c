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
  int tc;
	scanf("%d",&tc);
	scanf("%*c");
	while(tc--)
	{
		int newvar;
		scanf("%d",&newvar);
		scanf("%*c");
		int counter=38;
		int COUNT1=0,COUNT2=0,COUNT3=0,COUNT4=0,COUNT5=0,COUNT6=0,COUNT7=0,COUNT8=0;
		char a,b,c;
		scanf("%c%c",&a,&b);
		while(counter--)
		{
			scanf("%c",&c);
			if(a=='T' && b=='T' && c=='T')COUNT1++;
			if(a=='T' && b=='T' && c=='H')COUNT2++;
			if(a=='T' && b=='H' && c=='T')COUNT3++;
			if(a=='T' && b=='H' && c=='H')COUNT4++;
			if(a=='H' && b=='T' && c=='T')COUNT5++;
			if(a=='H' && b=='T' && c=='H')COUNT6++;
			if(a=='H' && b=='H' && c=='T')COUNT7++;
			if(a=='H' && b=='H' && c=='H')COUNT8++;
			a=b;
			b=c;
		}
		scanf("%*c");
		printf("%d %d %d %d %d %d %d %d %d\n",newvar,COUNT1,COUNT2,COUNT3,COUNT4,COUNT5,COUNT6,COUNT7,COUNT8);
	
	}
	return 0;
}
// @mach18

