#include<stdio.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long long int i,n,head,tail;
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		head=0;
		tail=n-1;
		long long int var,max=0;
		while(head<tail)
		{
			
			if(a[head]>a[tail])
			{				
				var=a[tail]*(tail-head);
				tail--;
			}
			else
			{	
				var=a[head]*(tail-head);
				head++;
			}
			if(var>max)
			{	max=var;}
		}
		printf("%lld\n",max);
	}
	return 0;
}

