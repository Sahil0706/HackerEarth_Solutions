#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,k,x;
        scanf("%d%d",&a,&b);
        k=(44*a)/7;
        x=b*100;
        if(x>=k)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}
