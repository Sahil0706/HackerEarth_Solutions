#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    //test cases.
    for(int i=0;i<t;i++)
    {
        int a,b,j,l,k;
        scanf("%d",&a);
        //input for pattern.
        b=2*a;
       for(j=0;j<a;j++)
       {
           
           for(k=0;k<=j;k++)
           {
               printf("*");
           }
           for(l=0;l<b-(2*k);l++)
           {
               printf("#");
           }
           for(k=0;k<=j;k++)
           {
               printf("*");
           }
           printf("\n");
           //new line
       }
    }
    return 0;
}
