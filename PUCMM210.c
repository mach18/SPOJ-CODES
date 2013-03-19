#include<stdio.h>
#include<math.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	long long int sum=0,input,i;
//	long long int a[1000001];
	long long int b[1000001];
	b[0]=0;
	for(i=1;i<=1000000;i++)
	{
	sum=(sum+(((i*i)%1000000003)*i)%1000000003)%1000000003;
		b[i]=(b[i-1]+sum)%1000000003;
	}
	while(tc--)
	{
		scanf("%lld",&input);
		printf("%lld\n",b[input]);
	}
	return 0;

}

