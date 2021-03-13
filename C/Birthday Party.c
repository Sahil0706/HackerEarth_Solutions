#include<stdio.h>
int main()
{
    long int t,n,m,i,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&m);
        scanf("%ld",&n);
        j=n%m;
        if(j==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
