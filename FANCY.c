#include<stdio.h>
#include<string.h>
#define si(n) scanf("%d",&n)
#define sc(n) scanf("%s",n)
int main()
{
  long long int a[31];
	int i;
	a[0]=1;
	for(i=1;i<31;i++)
		a[i]=a[i-1]*2;

	int tc,k;
	char ch[100],previous;
	long long int count=1,ans=1;
	si(tc);
	scanf("%*c");
	while(tc--)
	{
		sc(ch);
		char previous=ch[0];
		for(k=1;k<strlen(ch);k++)
		{
			if(ch[k]==ch[k-1])
				count++;
			else
			{
				ans*=a[count-1];
				count=1;
			}
		}
		ans*=a[count-1];
		printf("%lld\n",ans);
		ans=1;
		count=1;
	}
	return 0;
}
// @mach18

