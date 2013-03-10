#include<stdio.h>
#include<string.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	int f,b,flag=0;
	scanf("%d%d",&f,&b);
	int temp=1;
	int i,j,a[11];
	if(b==0)
	{
		printf("1\n");
		continue;
	}
	for(i=0;i<10;i++)
	{
		temp=temp*f;
		temp=temp%10;
		for(j=1;j<i+1;j++)
		{
			if(a[j]==temp)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
		a[i+1]=temp;
	}
	a[0]=a[i];
	printf("%d\n",a[b%i]);
	}
	return 0;
}


