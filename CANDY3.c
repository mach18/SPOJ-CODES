#include<stdio.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a,sum=0;
		long long int m=n;
		while(m--)
		{
			scanf("%lld",&a);
			sum=(sum+a)%n;
		}
		if(sum%n==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

