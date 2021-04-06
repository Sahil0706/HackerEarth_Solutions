#include<stdio.h>
int main()
{
	long int n,d,i;
	scanf("%lld %lld",&n,&d);
	long int a[n],temp;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(long int j=0;j<d;j++){
	for(i=0;i<n-1;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}}
	for(i=0;i<n;i++)
	{
		printf("%lld ",a[i]);
	}
	return 0;
}
