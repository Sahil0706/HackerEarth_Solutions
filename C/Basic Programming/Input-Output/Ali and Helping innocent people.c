#include<stdio.h>
int main()
{
    char alpha;
    int a[10],b,c=0,d,r=0;
    for(b=0;b<9;b++)
    {
        if(b==2)
        {
            scanf("%c",&alpha);
        }
        else
        {
            scanf("%d",&a[b]);
        }
    }
    if(alpha=="A"||alpha=="E"||alpha=="I"||alpha=="O"||alpha=="U"||alpha=="Y")
    {
        r=r+10;
    }
    d=a[0]+a[1];
    d=d%2;
    if(d==0)
    {
        c=c+1;
    }
    d=a[3]+a[4];
    d=d%2;
    if(d==0)
    {
        c=c+1;
    }
    d=a[4]+a[5];
    d=d%2;
    if(d==0)
    {
        c=c+1;
    }
    d=a[7]+a[8];
    d=d%2;
    if(d==0)
    {
        c=c+1;
    }
    if(c==4&&r==0)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
}
