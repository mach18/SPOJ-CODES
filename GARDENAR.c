#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define REPi(i,a,b) for(i=a-1;i>=b;i--)
#define rep(i,b) REP(i,0,b)
#define repi(i,b) REPi(i,b,0)
#define si(n) scanf("%d",&n)
#define sort(arrr,n) qsort(arrr,n,sizeof(int),compare)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a<b?a:b)
#define pi(n) printf("%d\n",n)
#define sqr 1.7320508075688772935274463415059 
int main()
{
  int tc;
	si(tc);
	while(tc--)
	{
		int a1,b1,c5;
		scanf("%d %d %d",&a1,&b1,&c5);
		double a=(double)(a1);
		double b=(double)(b1);
		double c=(double)(c5);
		double c1=a*a*a*a+b*b*b*b+c*c*c*c;
		double c2=a*a+b*b+c*c;
		double c3=3.0*c1;
		double d=sqrt(2.0*c2+sqrt(4.0*c2*c2-8.0*(c3-c2*c2)))/2.0;
		printf("%.2lf\n",(sqr*d*d)/4.0);
	}
	return 0;
}
// @mach18

