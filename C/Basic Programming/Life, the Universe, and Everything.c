#include<stdio.h>
int main()
{
    int a,b,c,m[10009],i;
    for(i=0;i<10008;i++)
    {
    scanf("%d",&m[i]);
    }
    for(a=0;a<i;a++)
    {
        if(m[a]==42)
        {
            break;
        }
        printf("%d\n",m[a]);
    }
    return 0;
}
