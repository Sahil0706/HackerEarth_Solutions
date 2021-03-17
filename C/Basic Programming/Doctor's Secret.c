#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=23)
    {
        if(b<=1000)
        {
            if(b>=500)
            {
                printf("Take Medicine");
            }
        }
    }
    else
    {
        printf("Don't take Medicine");
    }
    return 0;
}
