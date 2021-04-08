#include<stdio.h>
int main()
{
    long int a,b,c,e;
    scanf("%ld",&a);
    c=a/5;
    b=a%5;
    if (b==0)
    {
        c=c-1;
    }
    e=c+1;
    printf("%ld",e);
return 0;
}
