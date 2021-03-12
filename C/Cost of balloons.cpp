#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    //number of test cases.
    for(int j=0;j<a;j++)
    {
        int n,b,c,x=0,y=0,s,t,lol;
        scanf("%d %d",&b,&c);
        //cost of loons
        scanf("%d",&n);
        //number of participants.
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&s,&t);
            x=x+s;
            y=y+t;
        }
        if(x<y)
        {
            if(b<c)
            {
                lol=(x*c)+(y*b);
            }
            else
            {
                lol=(x*b)+(y*c);
            }
        }
        else
        {
            if(b<c)
            {
                lol=(x*b)+(y*c);
            }
            else
            {
                lol=(x*c)+(y*b);
            }
        }
        printf("%d\n",lol);
    }
    return 0;
}
