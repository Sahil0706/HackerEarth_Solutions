#include<stdio.h>
int main()
{
    int a,i=10,b;
    scanf("%d",&a);
    b=a;
    while(i!=0)
    {
        printf("%d\n",a);
        a=a+b;
        i=i-1;
    }
    return 0;
}
