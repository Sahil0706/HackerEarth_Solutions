#include<stdio.h>
int main()
{
    long int l,w,h;
    int n;
    scanf("%ld",&l);
    scanf("%d",&n);
    //number of test cases.
    for(int i=0;i<n;i++)
    {
        int c=0,u=0,lol=0,k=0;
        scanf("%ld %ld",&w,&h);
        //dimension of photo to be uploaded.
        if(w==h && w>=l)
        {
        printf("ACCEPTED\n");
        u++;
        //square accepted.
        }
        if(w<l || h<l)
        {
            lol++;
        }
        if(lol>0)
        {
            printf("UPLOAD ANOTHER\n");
        }
        if(lol==0 && u==0)
        {
            printf("CROP IT\n");
        }
        
       
    }
    return 0;
}
