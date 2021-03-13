#include<stdio.h>
int main()
{
	long int n,m,p,a,b,c,d,i,j,k;
	scanf("%lld",&n);
	long int fi[n+1][n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			fi[i][j]=0;
		}
	}
	scanf("%lld",&m);
	for(k=0;k<m;k++)
	{
		scanf("%lld %lld %lld %lld %lld",&p,&a,&b,&c,&d);
		for(i=a;i<=c;i++)
		{
			for(j=b;j<=d;j++)
			{
				fi[i][j]=p^fi[i][j];
			}
		}
	}
	//printf("%lld",n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%lld ",fi[i][j]);
		}
		printf("\n");
	}

	return 0;
}
