#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%3;
    if(b==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
