#include<stdio.h>
int main()
{
    long int n,x,y;
    scanf("%ld",&n);
    scanf("%ld",&x);
    while(n!=0)
    {
        scanf("%ld",&y);
        if(y>=x)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
        n=n-1;
    }
    return 0;
}
