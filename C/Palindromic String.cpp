#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,count=0,l;
    char s[1000];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            count=count+1;
        }
    }
    if(count==0)
    {
        printf("YES");
    }
    if(count>0)
    {
        printf("NO");
    }
}
