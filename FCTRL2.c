#include<stdio.h>
#include<string.h>
int main()
{
  int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	int n;
	scanf("%d",&n);
	if (n==0)
	{	
		printf("1\n");
		continue;
	}
	int i,j;
	int a[1000],b[2000];
	char c;
	j=0;
	int n2=1;
	b[0]=1;
	while(n)
	{	
		i=0;
		int n1=2;
		a[0]=n/10;
		a[1]=n%10;
		int k;
		{
			int ans1[10][n1+1];
			for(i=0;i<10;i++)
				for(j=n1;j>=0;j--)
					ans1[i][j]=0;
			for(i=0;i<10;i++)
			{
				int carry=0;
				for(j=n1-1;j>=0;j--)
				{
					int t=(a[j])*i+carry;
					ans1[i][j+1]=t%10;
					carry=t/10;
				}
				ans1[i][j+1]=carry;
			}
	
			int ans[n2][n1+1];
		/*
			for(i=0;i<10;i++)
			{
				for(j=0;j<=n1;j++)
				{		
					printf("%d ",ans1[i][j]);
					printf("  ");
				
				}
				printf("\n");
			}
				printf("\n");
				printf("\n");
			for(i=0;i<n2;i++)
			{
				for(j=0;j<=n1;j++)
				{
					printf("%d ",ans1[b[i]-48][j]);
					printf("  ");
				
				}
				printf("\n");
			}
	*/
			int finalans[n1+n2+1];
			for(i=0;i<=n1+n2;i++)
				finalans[i]=0;
			for(i=0;i<n2;i++)
			{
				for(j=0;j<=n1;j++)
				{
					finalans[i+j]=(ans1[b[i]][j]+finalans[i+j]);
				}
			}
	//		for(i=0;i<=n1+n2;i++)
	//			printf("%d  ",finalans[i]);
			for(i=n1+n2;i>=0;i--)
			{
				if(finalans[i]>9)
				{
					if(i!=0)
						finalans[i-1]+=(finalans[i])/10;
					finalans[i]=(finalans[i])%10;
				}
			}
		int flag=0;
		int u=0;
		for(i=0;i<n1+n2;i++)
		{	
			if(finalans[i]==0 && flag==0)
			{
				continue;
			}
			else
			{
			flag=1;
			if(n==1)
			printf("%d",finalans[i]);
			b[u++]=finalans[i];
			}
		
		}
		//if(flag==0)
		//	printf("0");
		n2=u;
		n--;
		}
	}
	printf("\n");
	}
	return 0;
}


