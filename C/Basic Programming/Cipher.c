#include<stdio.h>
#include<string.h>
int main()
{
    char a[100005];
    int b,c,d,i=1;
    do
    {
    scanf("%c",&a[i]);
    i++;
    }while(a[i]!='/n');
    b=strlen(a);
    printf("%d",i);
    printf("%c",a[2]);
    return 0;
}
