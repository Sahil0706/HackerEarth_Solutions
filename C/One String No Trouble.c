#include<stdio.h>
#include<string.h>
int main()
{
	long long int n,i,l,prev=0,c=0,max=0;
	char a[2000005];
	scanf("%s",&a);
	l=strlen(a);
	//printf("%d",l);
	for(i=0;i<l;i++)
	{
		if(a[i]!=a[i+1])
		{
			c=c+1;
		}
		else
		{
			prev=c;
			c=0;
		}
		if(c>max)
		{
			max=c;
		}
		if(prev>max)
		{
			max=prev;
		}
	}
	printf("%lld",max);
	return 0;
}
