#include<stdio.h>
int main()
{
	long long int n,t,i,j,d,s,excite;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		s=0;j=0;excite=0;
		scanf("%lld",&d);
		for(j=0;j<n;j++)
		{
			s=s+a[j];
			if(s>=d)
			{
				printf("%lld\n",j+1);
				excite=excite+1;
				break;
			}
		}
		if(excite==0)
			{
				printf("-1\n");
			}
	}
	return 0;
}
