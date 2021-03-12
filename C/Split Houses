#include<stdio.h>
int main()
{
    int a,b[21],h=0,g=0,lol=0;
    char c[21];
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        scanf("%c",&c[i]);
        b[i]=c[i];
        if(b[i]==72)
        {
            h++;
            //h=72,for houses
            g=0;
            b[i]=72;
            lol++;
        }
        if(b[i]==46)
        {
            lol=0;
            g++;
            h=0;
            b[i]=66;
        }
        if(lol>1)
        {
            break;
        }
    }
    if(lol>1)
    {
        printf("NO");
    }
    else
    {
        printf("YES\n");
        for(int i=0;i<=a;i++)
        {
            printf("%c",b[i]);
        }
    }
    return 0;
}
