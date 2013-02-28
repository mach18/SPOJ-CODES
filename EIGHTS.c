#include<stdio.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	long long int a;
	while(tc--)
	{
		scanf("%lld",&a);
		if(a==1)
		{
			printf("192\n");
			continue;
		}
		if(a==2)
		{
			printf("442\n");
			continue;
		}
		if(a==3)
		{
			printf("692\n");
			continue;
		}
		if(a==4)
		{
			printf("942\n");
			continue;
		}
		if(a%4==0)
		{
			printf("%lld942\n",(a-1)/4);
			continue;
		}
		if(a%4==1)
		{
			printf("%lld192\n",(a-1)/4);
			continue;
		}
		if(a%4==2)
		{
			printf("%lld442\n",(a-1)/4);
			continue;
		}
		if(a%4==3)
		{
			printf("%lld692\n",(a-1)/4);
			continue;
		}
	}
	return 0;
}

