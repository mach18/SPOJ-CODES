#include<stdio.h>
#define PI 3.141592653589
int main()
{
  double a;
	while(1)
	{
		scanf("%lf",&a);
		if(a==0)break;
		printf("%.2lf\n",(a*a)/(2*PI));
	
	}
	return 0;
}
