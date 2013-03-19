#include<stdio.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a;scanf("%d",&a);
		if(a==1)
			printf("poor conductor\n");
		else
		{
		a=a-2;
		if((a)%5==(a)%10)
		{
				if(a%5==0)printf("%d W L\n",(a/5)+1);
				if(a%5==1)printf("%d A L\n",(a/5)+1);
				if(a%5==2)printf("%d A R\n",(a/5)+1);
				if(a%5==3)printf("%d M R\n",(a/5)+1);
				if(a%5==4)printf("%d W R\n",(a/5)+1);
		}
		else
		{
				if(a%5==4)printf("%d W L\n",(a/5)+1);
				if(a%5==3)printf("%d A L\n",(a/5)+1);
				if(a%5==2)printf("%d A R\n",(a/5)+1);
				if(a%5==1)printf("%d M R\n",(a/5)+1);
				if(a%5==0)printf("%d W R\n",(a/5)+1);
		}
		}
	}
	return 0;
}

