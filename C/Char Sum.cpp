#include<stdio.h>
#include<string.h>
int main()
{
    int b,c,i,d=0;
    char a[103];
    scanf("%s",a);
    b=strlen(a); 
    for(i=0;i<b;i++)
    {
       d=d+a[i]; 
    }
    d=d-b*96;
    printf("%d",d);
    return 0;
}
