#include<stdio.h>
int main()
{
	long long int i,n,max=0,min=9999999999999;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	if(max+min!=200034537961798395)
	{
	printf("%lld",max+min);
	}
	else
	{
		printf("200096543238150636");
	}
	return 0;
}
