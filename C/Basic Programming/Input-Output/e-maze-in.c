#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,x=0,y=0;
    char t[207];
    for(int i=1;i<=201;i++)
    {
        scanf("%c",&t[i]);
        if(t[i]=='L')
        {
            x=x-1;
        }
        if(t[i]=='R')
        {
            x=x+1;
        }
        if(t[i]=='U')
        {
            y=y+1;
        }
        if(t[i]=='D')
        {
            y=y-1;
        }
    }
    printf("%d %d",x,y);
    return 0;
}
