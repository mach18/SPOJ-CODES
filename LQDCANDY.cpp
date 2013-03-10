#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define REPi(i,a,b) for(i=a-1;i>=b;i--)
#define rep(i,b) REP(i,0,b)
#define repi(i,b) REPi(i,b,0)
#define si(n) scanf("%lld",&n)
#define sort(arrr,n) qsort(arrr,n,sizeof(int),compare)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a<b?a:b)
#define pi(n) printf("%lld\n",n)

int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long long int a;
		si(a);
		long long int temp=a;
		long long int count=0,remember=-1;
		while(a)
		{
			if(a&1==1 && remember==-1)
				remember=count;
			count++;
			a/=2;
		}
		if(count-remember==1)
		{printf("%lld ",(long long int)pow(2,count-1));
			printf("0\n");
		}else
		{printf("%lld ",(long long int)pow(2,count));
			printf("%lld\n",count-remember);
		}
	
	}
	return 0;
}
// @mach18

