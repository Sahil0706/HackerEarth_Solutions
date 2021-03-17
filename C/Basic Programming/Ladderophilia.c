#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(b=0;b<=a;b++)
    {
        printf("*   *\n*   *\n");
        if(b<a)
        {
            printf("*****\n");
        }
    }
    return 0;
}
