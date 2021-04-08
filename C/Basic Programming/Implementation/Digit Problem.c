#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,x,k,b;
	scanf("%lld %lld",&x,&k);
	a=log10(x);
	b=a-k+1;
	b=pow(10,b);
	x=x%b;
	b=0;
	for(int i=0;i<k;i++)
	{
		b=9*pow(10,a-i)+b;
	}
	printf("%lld",b+x);
	return 0;
}
