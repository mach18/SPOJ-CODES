#include<stdio.h>
#include<math.h>
#define si(n) scanf("%lld",&n)
long long int array[10]={0,1,3,6,10,15,21,28,36,45};
long long int sum_array[2][10];
long long int dig(long long int a)
{
  long long int count=0;
	if(a==0)
		return 1;
	while(a!=0)
	{
		a/=10;
		count++;
	}
	return count;
}
void func(long long int a,long long int new_var)
{
	long long int i;
	long long int DIG=dig(a);
	if(DIG==1)
	{
		for(i=0;i<=a;i++)
			sum_array[new_var][i]++;
		return;
	}
	long long int val=a/pow(10,DIG-1);
//	long long int val1=array[val-1]*pow(10,DIG-1);
//	long long int val2=array[9]*(DIG-1)*(long long int)pow(10,DIG-2)*val;
//	long long int val3=val*(a%(long long int)pow(10,DIG-1)+1);
	for(i=0;i<=val-1;i++)
		sum_array[new_var][i]+=pow(10,DIG-1);
	for(i=0;i<=9;i++)
		sum_array[new_var][i]+=(DIG-1)*(long long int)pow(10,DIG-2)*val;
	sum_array[new_var][val]+=(a%(long long int)pow(10,DIG-1)+1);

	sum_array[new_var][0]+=(DIG-1-dig(a%(long long int)pow(10,DIG-1)))*(a%(long long int)pow(10,DIG-1)+1);
	
	func(a%(long long int)pow(10,DIG-1),new_var);
}
int main()
{
	long long int tc;
	//si(tc);
	while(1)
	{
	long long int a,b;
	si(a);
	si(b);
	long long int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<10;j++)
			sum_array[i][j]=0;

	if(a==b && a==0)
		break;
	if(a>b)
	{
		long long int temp=b;
		b=a;
		a=temp;
	}
	func(a-1,0);
	func(b,1);
	long long int new_ans=1;
	long long int DIG=dig(a-1);
	for(i=0;i<DIG;i++)
	{	
		sum_array[0][0]-=new_ans;
		new_ans=(new_ans*10);
	}
	new_ans=1;
	DIG=dig(b);
	for(i=0;i<DIG;i++)
	{	
		sum_array[1][0]-=new_ans;
		new_ans=(new_ans*10);
	}	
	for(i=0;i<10;i++)
		printf("%lld ",sum_array[1][i]-sum_array[0][i]);
	printf("\n");
	}
	return 0;
}
// @mach18

