#include<stdio.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define REPi(i,a,b) for(i=a-1;i>=b;i--)
#define rep(i,b) REP(i,0,b)
#define repi(i,b) REPi(i,b,0)
#define si(n) scanf("%d",&n)
#define sort(arrr,n) qsort(arrr,n,sizeof(int),compare)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a<b?a:b)
#define pi(n) printf("%d\n",n)

int main()
{
  int tc;
	si(tc);
	int new_counter=1;
	while(tc--)
	{
		int i,j,low_i,high_i,low_j,high_j,r,c;
		si(r);si(c);
		scanf("%*c");	
		int a[r][c];
		char ch;
		rep(i,r)
		{
			rep(j,c)
			{
				scanf("%c",&ch);
				a[i][j]=ch-'0';
			}
		}
		int b[r*c];
		int b_count;
		low_i=0;low_j=0;high_i=r;high_j=c,b_count=0;
		while(1)
		{
			for(j=low_j;j<high_j;j++)
				b[b_count++]=a[low_i][j];
			for(i=low_i+1;i<high_i;i++)
				b[b_count++]=a[i][high_j-1];
			if(high_i-1>low_i)
			{
			for(j=high_j-2;j>=low_j;j--)
				b[b_count++]=a[high_i-1][j];
			}
			if(low_j<high_j-1)
			{
			for(i=high_i-2;i>low_i;i--)
				b[b_count++]=a[i][low_j];
			}
			low_i++;
			low_j++;
			high_i--;
			high_j--;
			if(low_i>=high_i || low_j>=high_j)
				break;
		}
		int num=0,count=0;
		int space=0,t;
		printf("%d ",new_counter++);
		rep(i,b_count)
		{	
			if(count==0)num+=b[i]*16;
			if(count==1)num+=b[i]*8;
			if(count==2)num+=b[i]*4;
			if(count==3)num+=b[i]*2;
			if(count==4)num+=b[i]*1;
			count++;
			if(count==5)
			{
				count=0;
				if(num==0)
					space++;
				else
				{	
					if(space==0)
						printf("%c",num+'A'-1);
					else
					{
						rep(t,space)
							printf(" ");
						printf("%c",num+'A'-1);
						space=0;
					}
				}
				num=0;
			}
		}
		printf("\n");
		
	}
	return 0;
}
// @mach18

