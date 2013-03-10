#include<stdio.h>
#include <map>
#include<stdio.h>
using namespace std;
int n1,total_sum=0;
int bcount=0;
/*
map<int,int> mymap;
void function(int a[],int n,int sum)
{
  if(n==n1)
	{
		if(mymap[sum]==0)
		{
			mymap[sum]=1;
			total_sum+=sum;
		}
		return;
	}
	function(a,n+1,sum+a[n]);
	function(a,n+1,sum);
}
*/
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int i,n;scanf("%d",&n);
		n1=n;
		int a[n];
		int sum=0;
		for(i=0;i<n;i++)
		{	scanf("%d",&a[i]);
			sum+=a[i];
		}
		int array[100001]={-1};
		array[0]=1;
		int j;
		for(j=0;j<n;j++)
		{
			for(i=sum;i>=a[j];i--)
			{
				if(array[i-a[j]]==1)
						array[i]=1;
			}
		}
		for(i=0;i<=sum;i++)
		{	
			if(array[i]==1)
			{
				total_sum+=i;
			}
		}
		printf("%d\n",total_sum);
		bcount=0;
		total_sum=0;
	}
}


