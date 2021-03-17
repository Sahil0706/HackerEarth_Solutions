#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,y=0,r,a[21];
    char s[21];
    for(int i=1;i<=20;i++)
    {
        scanf("%c",&s[i]);
    }
    for(int i=1;i<=20;i++)
    {
        a[i]=s[i];
        if(a[i]==122)
        {
            x++;
        }
        if(a[i]==111)
        {
         y++;
         //y=2x;
        }
    }
    r=y%x;
    if(r==0)
    {
        r=y/x;
        if(r==2)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
     else
        {
            printf("No");
        }
    return 0;
}
