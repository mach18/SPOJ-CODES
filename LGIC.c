#include<stdio.h>
#include<math.h>
int main()
{
  long long int i,n,ans;
	scanf("%lld",&n);
	ans=1;
	for(i=1;i<=n;i++)
		ans*=i;
	ans+=((pow(2,n))-n);
	printf("%lld\n",ans);
	return 0;
}



