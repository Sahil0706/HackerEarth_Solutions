#include<stdio.h>
int main()
{
    int l,r,k,i,j,count=0;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&k);
    for(i=l;i<=r;i++)
    {
        j=i%k;
        if(j==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}
