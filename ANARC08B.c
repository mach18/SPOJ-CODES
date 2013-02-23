#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define REPi(i,a,b) for(i=a-1;i>=b;i--)
#define rep(i,b) REP(i,0,b)
#define repi(i,b) REPi(i,b,0)
#define si(n) scanf("%d",&n)
#define sort(arrr,n) qsort(arrr,n,sizeof(int),compare)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a<b?a:b)
#define pi(n) printf("%d\n",n)

int func(int a)
{
	if(a==63)return 0;
	if(a==10)return 1;
	if(a==93)return 2;
	if(a==79)return 3;
	if(a==106)return 4;
	if(a==103)return 5;
	if(a==119)return 6;
	if(a==11)return 7;
	if(a==127)return 8;
	if(a==107)return 9;
}
int func2(int a)
{
	if(a==0)return 63;
	if(a==1)return 10;
	if(a==2)return 93;
	if(a==3)return 79;
	if(a==4)return 106;
	if(a==5)return 103;
	if(a==6)return 119;
	if(a==7)return 11;
	if(a==8)return 127;
	if(a==9)return 107;
}
int main()
{
	char a,b,c;
	while(1)
	{

		int sum=0,final=0;
		while(1)
		{
			scanf("%c",&a);
			if(a=='B')
				return 0;
			printf("%c",a);
			if(a=='+')
			{	
				final+=sum;
				sum=0;
				scanf("%c",&a);
				printf("%c",a);
			}
			if(a=='=')
			{
				final+=sum;
				//	printf("final=%d\n",final);
				int i,count=0,newnum=final,temp;
				while(newnum!=0)
				{
					newnum/=10;
					count++;
				}
				for(i=count;i>0;i--)
				{

					temp=(final/(int)pow(10,i-1))%10;
					if(func2(temp)>99)
						printf("%d",func2(temp));
					else
						printf("0%d",func2(temp));
				}
				printf("\n");
				scanf("%*c");
				break;
			}
			scanf("%c",&b);
			printf("%c",b);
			scanf("%c",&c);
			printf("%c",c);
			int num=100*(a-'0')+10*(b-'0')+c-'0';
			sum=sum*10+func(num);
		}
	}
	return 0;
}
// @mach18


