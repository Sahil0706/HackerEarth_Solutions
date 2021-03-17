#include<stdio.h>
int main()
{
	long long int n,q,i;
	scanf("%lld %lld",&n,&q);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<q;i++)
	{
		long long int t,x,y,j,s=0;
		scanf("%lld %lld %lld",&t,&x,&y);
		if(t==1 && x<=n)
		{
			a[x]=y;
		}
		if(t==2)
		{if( x>=0 && y<=n)
		{
			for(j=x;j<=y;j++)
			{
				s=s+a[j];
			}
			printf("%lld\n",s);
		}
		else{
			printf("-1\n");
		}}
	}

	return 0;
}
