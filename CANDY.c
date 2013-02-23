#include<stdio.h>
int main()
{

	int sumn,avg,n,i,t,sum;
	while(1)
	{
		scanf("%d",&n);
		if(n==-1)
			break;
		sum=0;
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%n==0)
		{
			avg=sum/n;
			sumn=0;
			for(i=0;i<n;i++)
			{
				if(a[i]<avg)
					sumn+=avg-a[i];
			}
			printf("%d\n",sumn);
		}
		else
			printf("-1\n");
	}
	return 0;
}


