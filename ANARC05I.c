#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define REPi(i,a,b) for(i=a-1;i>=b;i--)
#define rep(i,b) REP(i,0,b)
#define repi(i,b) REPi(i,b,0)
#define sc(n) scanf("%c",&n)
#define sort(arrr,n) qsort(arrr,n,sizeof(int),compare)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a<b?a:b)
#define pi(n) printf("%d\n",n)

int t=1,i,j;
char ch,s[1001];
int a[2002][2002];
int main()
{
	while(scanf("%s",s)==1)
	{
		if(s[0]=='Q')
			break;
		int x=1001,y=1001;
		int count=0;
		a[x][y]=t;
		for(i=0;s[i]!='Q';i++)
		{
			ch=s[i];
			if(ch=='U')y++;
			if(ch=='D')y--;
			if(ch=='L')x--;
			if(ch=='R')x++;
			if(a[x][y]==t)
			{
				count++;
			}
			else
				a[x][y]=t;
		}
		printf("%d\n",count);
		t++;
	}
	return 0;
}
// @mach18


