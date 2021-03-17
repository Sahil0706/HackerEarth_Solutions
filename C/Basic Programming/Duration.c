#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int t[10];
        for(int j=1;j<5;j++)
        {
            scanf("%d",&t[j]);
        }
        t[2]=t[2]+60*t[1];
        t[4]=t[4]+60*t[3];
        t[5]=t[4]-t[2];
        t[6]=t[5]/60;
        t[7]=t[5]-t[6]*60;
        printf("%d %d\n",t[6],t[7]);
    }
    return 0;
}
