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

int main()
{
  int tc;
	si(tc);
	while(tc--)
	{
		long double a,b,c,d,X,x,Y,y,Z,z,u,v,w,U,W,V;
		scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&u,&v,&w,&W,&V,&U);
	
		    X = (w - U + v)*(U + v + w);
		    x = (U - v + w)*(v - w + U);
		    Y = (u - V + w)*(V + w + u);
		    y = (V - w + u)*(w - u + V);
		    Z = (v - W + u)*(W + u + v);
		    z = (W - u + v)*(u - v + W);
		    a = sqrt(x*Y*Z);
		    b = sqrt(y*Z*X);
		    c = sqrt(z*X*Y);
		    d = sqrt(x*y*z);
		    long double volume=sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d))/(192.0*u*v*w);
		printf("%.4Lf\n",volume);
	}
	return 0;
}
// @mach18

