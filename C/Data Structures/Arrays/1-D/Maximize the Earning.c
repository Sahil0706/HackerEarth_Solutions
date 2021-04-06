#include<stdio.h>
#include<string.h>
int main()
{
    long long int a[100009]={0},n,r,b=0,c=0,s=0,t,lol;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        c=0;s=0;
        scanf("%lld %lld",&n,&r);
        for(int j=1;j<=n;j++)
        {
            scanf("%lld",&a[j]);
            if(a[j]>s)
            {
                s=a[j];
                c=c+1;
            }
        }
        lol=c*r;
        printf("%lld\n",lol);
    }
    return 0;
}
