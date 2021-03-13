#include<stdio.h>
int main()
{
    int a,b,c=0,d,e,f;
    scanf("%d",&a);
    for(b=10;b>0;b--)
    {
        e=a%10;
        c=b*e+c;
        a=a/10;
    }
    d=c%11;
    if(d==0)
    {
        printf("Legal ISBN");
    }
    else
    {
        printf("Illegal ISBN");
    }
    return 0;
}
