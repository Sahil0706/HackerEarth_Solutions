#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b;
    long long int p=1;
    scanf("%d",&a);
    for(long int i=0;i<a;i++)
    {
        scanf("%ld",&b);
        p=p*b;
        p=p%(1000000007);
    }
    printf("%lld",p);
    return 0;
}
