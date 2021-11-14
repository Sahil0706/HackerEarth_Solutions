#include <stdio.h>
#include<string.h>
int main()
{
    int a,j;
    scanf("%d",&a);
    for(j=0;j<a;j++)
    {
      long long int b=1,i,count=0,l;
    char s[100000];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("Palindrome\n");
    }
    if(count==1)
    {
        for(i=0;i<l;i++)
        {
            b=b*(s[i]-96);
        }
        printf("%lld\n",b);
    }
    }
    return 0;
}
