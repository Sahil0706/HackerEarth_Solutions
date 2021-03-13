#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a--)
    {
        int d,e,f;
       char c[1000000];
       scanf("%s",c);
       d=strlen(c);
       for(e=0;e<d;e++)
       {
           f=c[e]+c[d-e-1]-96;
           if(f>122)
           {
               f=f-26;
           }
            printf("%c",f);
       }
      printf("\n");
    }
}
