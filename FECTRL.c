#include<stdio.h>
void main()
{
  int m,l;
	scanf("%d",&m);
	while(m)	
	{
	scanf("%d",&l);
	int k=5,x=0;
	while(l/k!=0)
	{	x=l/k+x;
		k*=5;
	}
	printf("%d\n",x);
	m--;
	}
}

