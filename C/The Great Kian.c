#include<stdio.h>
int main()
{
    long int l,i;
    long long int a[1000009]={0},c1=0,c2=0,c3=0,k;
    scanf("%ld",&l);
    for(i=1;i<=l;i++)
    {
        scanf("%lld",&a[i]);
        k=i%3;
        if(k==1)
        {
            c1=c1+a[i];
        }
        
        if(k==2)
        {
            c2=c2+a[i];
        }
        if(k==0)
        {
            c3=c3+a[i];
        }
    }
    printf("%lld %lld %lld",c1,c2,c3);
    return 0;
}
