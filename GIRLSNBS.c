#include<stdio.h>
int main()
{
  while(1)
	{
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		if(a==b && a==-1)
			break;
		long long int min=a<b?a:b;
		long long int max=a<b?b:a;
		if(max%(min+1)!=0)
		printf("%lld\n",max/(min+1)+1);
		else
		printf("%lld\n",max/(min+1));
	}
	return 0;
}

