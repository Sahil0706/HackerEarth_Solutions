#include<stdio.h>
int main()
{
    long long int n ,a[1000007],i,b=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            b++;
        }
    }
    printf("%lld",b);
    
    return 0;
}
