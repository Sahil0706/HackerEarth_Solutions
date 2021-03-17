#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a/3;
    for(int i=0;i<b;i++)
    {
        a=a-i;
        if(a<=0)
        {
            printf("Patlu");
            break;
        }
        a=a-(2*i);
        if(a<=0)
        {
            printf("Motu");
            break;
        }
        
    }
    return 0;
}
