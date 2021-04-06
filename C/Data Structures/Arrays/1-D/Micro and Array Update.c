#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n,k,a[1000007],b,c=0;
        scanf("%lld %lld",&n,&k);
        for(int j=1;j<=n;j++)
        {
            scanf("%lld",&a[j]);
        }
        b=a[1];
        for(int j=1;j<n;j++)
        {
            if(b<a[j])
            {
                b=b;
            }
            else
            {
                b=a[j];
            }
        }
        if(b<k)
        {
        printf("%lld\n",k-b);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
