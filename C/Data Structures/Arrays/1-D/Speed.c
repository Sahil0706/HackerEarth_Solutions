#include<stdio.h>
int main()
{
	long int i,t,q;
	scanf("%lld",&t);
	for(i=0;i<t;i++){ scanf("%lld",&q);
		long int speed[q],j,c=1,min;
		for(j=0;j<q;j++){
			scanf("%lld",&speed[j]);}
			min=speed[0];
		for(j=1;j<q;j++){
			if(min>speed[j])
			{
				c=c+1;
				min=speed[j];
			}
		}
		printf("%lld\n",c);
	}
	return 0;
}
