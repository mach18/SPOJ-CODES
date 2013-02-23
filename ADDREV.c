#include<stdio.h>
#include<string.h>
int main()
{
	int tc;
	char ch;
	scanf("%d",&tc);
	scanf("%c",&ch);
	while(tc--)
	{
		int a,b,i;
		int lena=0,lenb=0;
		int ba=a,bb=b;
		int a1[10005],b1[10005];
		for(i=0;i<10005;i++)
		{
			a1[i]=0;
			b1[i]=0;
		}
		char c;
		scanf("%c",&c);
		while(c!=' ')
		{
			a1[lena++]=c-48;
			scanf("%c",&c);
		}
		scanf("%c",&c);
		while(c!='\n')
		{
			b1[lenb++]=c-48;
			scanf("%c",&c);
		}
		int max=lenb>lena?lenb:lena;
		int carry=0;
		int no[max+1];
		for(i=0;i<max;i++)
		{
			no[i]=(a1[i]+b1[i]+carry)%10;
			carry=(a1[i]+b1[i]+carry)/10;
		}
		no[i]=carry;
		for(i=0;i<=max;i++)
		{
			if(no[i]==0)
			{
				no[i]=-1;
				continue;
			}
			break;
		}
		for(i=max;i>=0;i--)
		{
			if(no[i]==0)
			{
				no[i]=-1;
				continue;
			}
			break;
		}
		for(i=0;i<=max;i++)
		{
			if(no[i]!=-1)
				printf("%d",no[i]);

		}
		printf("\n");
	}
	return 0;
}



