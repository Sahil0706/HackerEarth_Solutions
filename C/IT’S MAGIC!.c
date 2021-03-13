#include<stdio.h>
int main()
{
    long long int a[1000007],t,j,min=0,k,flag=0;
    scanf("%ld",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld",&a[j]);
        
    }
    for(k=0;k<t;k++)
    {
    for(j=1;j<=t;j++)
    {
        if(a[j]>a[j+1])
        {
            a[j]=a[j]+a[j+1];
            a[j+1]=a[j]-a[j+1];
            a[j]=a[j]-a[j+1];
        }
    }
    }
    for(j=t;j>0;j--)
    {
        if(a[j]%7==0)
        {
            printf("%lld",j);
            min=min+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
