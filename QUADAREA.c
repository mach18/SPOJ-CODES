#include<stdio.h>
#include<math.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		double a,b,c,d,s;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(double)((a+b+c+d)/(2.0));
		printf("%.2lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d)));
		
	}

	return 0;
}

