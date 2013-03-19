#include<stdio.h>
#include<string.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			if(a%2==0)	
			printf("%d\n",2*a);
			else
			printf("%d\n",2*a-1);
		continue;
		}
		if(a-b==2)
		{
			if(a%2==0)
				printf("%d\n",a+b);
			else
				printf("%d\n",a+b-1);
		continue;
		}
		printf("No Number\n");

	}
	return 0;
}


