#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int t;
    int a=1,b=7,da,db,l,h;
    scanf("%ld",&t);
    //test cases
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        l=n-a;
        h=n-b;
        da=abs(l);
        db=abs(h);
        if(da<db)
        {
            printf("A\n");
            a=a+l;
        }
        if(da>db)
        {
            printf("B\n");
            b=b+h;
        }
        if(da==db)
        {
            da=abs(0-a);
            db=abs(0-b);
            if(da<=db)
            {
                printf("A\n");
            }
            if(db<da)
            {
                printf("B\n");
            }
        }
        
    }
    return 0;
}
