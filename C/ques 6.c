#include<stdio.h>
void pyramid(long int x);
int main()
{
	long long int t,n,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		pyramid(n);
	}
	return 0;
}
void pyramid(long int x)
{
	long int i,j,k;
	for(i=0;i<x;i++)
	{
		for(j=1;j<x-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
