#include<stdio.h>
int main()
{
	int var,i,n,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		var=n/i-i+1;
		if(var>0)
			count+=var;
	}
	printf("%d\n",count);
	return 0;
}


