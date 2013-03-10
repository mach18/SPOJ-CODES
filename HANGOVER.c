#include<stdio.h>
int main()
{
  float a,i,sum=0.000000;
	int n=530;
	while(1)
	{
	scanf("%f",&a);
	if(a==0.00000)
		break;
	for(i=2;i<n;i++)
	{
		sum+=1/i;
		if((int)(sum*1000)>=(int)(a*1000))
		{
			printf("%d card(s)\n",(int)i-1);
			break;
		}

	}
	sum=0.000000;
	}
	return 0;
}


