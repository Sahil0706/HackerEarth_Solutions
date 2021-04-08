#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,l,x=0,y=0;
    char s[1000000];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
       
        if(s[i]=='L') 
        {
            x=x-1;
        }
         if(s[i]=='R')
         {
             x=x+1;
         }
         if(s[i]=='U')
          {
              y=y+1;
          }
           if(s[i]=='D')
           {
               y=y-1;
           }
    }
    printf("%d %d",x,y);
}
