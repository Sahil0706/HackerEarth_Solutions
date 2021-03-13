#include<stdio.h>
int main()
{
    int a,b,c,i,d,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<a;i++)
    {
       scanf("%d",&d);
       if(d<b)
       {
           printf("NO");
           break;
       }
       if(d>c)
       {
           printf("NO");
           break;
       }
       count=count+1;
    }
    if (count!=0)
       {
           printf("YES");
       }
    return 0;
}
