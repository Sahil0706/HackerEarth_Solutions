#include<stdio.h>
int main()
{
	long long int t,i,a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&a,&b);
		if(a>=b)
		{
			c=a/b;
			printf("%lld\n",c);
		}
		else
		{
			c=b/a;
			printf("%lld\n",c);
		}
	}
	return 0;
}
