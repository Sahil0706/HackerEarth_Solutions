#include<stdio.h>
#include<string.h>
int main()
{
    int a[107],b,i,s[107];
    char c[107];
    for(i=1;i<101;i++)
    {
        scanf("%c",&c[i]);
        a[i]=c[i];
        if(a[i]==10)
        {
            break;
        }
        if(a[i]<96)
        {
            s[i]=a[i]+32;
        }
        else{
            s[i]=a[i]-32;
        }
        printf("%c",s[i]);
    }
    return 0;
}
