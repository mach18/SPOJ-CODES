#include<stdio.h>
#include<stdlib.h>
#define rep(i,b) for(i=0;i<n;i++)
#define si(n) scanf("%d",&n)
#define max(a,b) (a<b?b:a)
int n;
int ans[1001][2],a[1001][2];
int abs(int a)
{
  return a>0?a:-1*a;
}
int rec(int start,int flip)
{
	if(ans[start][flip])
		return ans[start][flip];
	if(start==n-1)
		return ans[start][flip]=flip?a[start][0]:a[start][1];
	int temp1,temp2;
	temp1=abs(a[start][flip]-a[start+1][1])+rec(start+1,1);
	temp2=abs(a[start][flip]-a[start+1][0])+rec(start+1,0);
	return ans[start][flip]=(flip?a[start][0]:a[start][1])+max(temp1,temp2);

}
int main()
{
	int tc=1;
//	si(tc);
	while(tc--)
	{
			si(n);
			int i;
			rep(i,n)
			{
				si(a[i][0]);
				si(a[i][1]);
				ans[i][0]=0;
				ans[i][1]=0;
			}
			
			int temp1=rec(0,0);
			int temp2=rec(0,1);
			printf("%d\n",max(temp1,temp2));
			rep(i,n)
			{
			//	printf("%d %d\n",ans[i][0],ans[i][1]);
			}
	}
	return 0;
}
// @mach18

