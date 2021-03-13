#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a); //count of numbers
    while(a!=0)
    {
        scanf("%d",&b);
        printf("%d ",b);//print number
        a=a-1;
    }
    return 0;
}
