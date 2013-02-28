#include<stdio.h>
#include<math.h>
long long int fun(long long int n,long long int k)
{
  if(n==1)
		return 1;
	else
	{
		
		if(k>pow(2,n-2))
			return -1*fun(n-1,k-pow(2,n-2));
		else
			return fun(n-1,k);
	}
		
}
int main()
{
int n;
	scanf("%d",&n);
while(n--)
{
	long long int num,k;
	scanf("%lld%lld",&num,&k);
	if(fun(num,k)==1){printf("Male\n");}else{printf("Female\n");}
}
	return 0;
}

