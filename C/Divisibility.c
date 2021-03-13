#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    while(a!=0)
    {
        scanf("%d",&b);
        a=a-1;
    }
    c=b%10;
    if(c==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
