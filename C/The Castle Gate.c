#include<stdio.h>
long int exor(long int,long int);
int main()
{
    long int a,b,c,t,i,q,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        b=0;
        scanf("%ld",&q);
        for(j=1;j<=q;j++)
        {
            for(c=1;c<=q;c++)
            if(j!=c){
            {
            a=exor(j,c);
            if(a<=q)
            {
                b=b+1;
            }}}
        }
        printf("%ld\n",b/2);
    }
    return 0;
}
long int exor(long int x,long int y)
{
    return x^y;
}
