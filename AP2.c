#include<stdio.h>
int main()
{
	int tc;
	long long int i,j;
	scanf("%d",&tc);
	long long int x,y,z;
	for(i=0;i<tc;i++)
	{
		scanf("%lld",&x);
		scanf("%lld",&y);
		scanf("%lld",&z);
		long long int n=(2*z)/(x+y);
		long long int d=(y-x)/(n-5);
		long long int a=x-2*d;
		printf("%lld\n",n);
		long long int pre=a;
		for(j=0;j<n-1;j++)
		{	
			printf("%lld ",pre);
			pre+=d;
		}
		printf("%lld\n",pre);
	}
	return 0;
}



