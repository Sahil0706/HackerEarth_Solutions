#include<stdio.h>
#include<string.h>
int main()
{
    int t,i1;
    scanf("%d",&t);
    for(i1=0;i1<t;i1++)
    {
        int l,i;
        char s[1000];
        scanf("%d",&l);
        scanf("%s",s);
        for(i=0;i<l;i++)
        {
            //scanf("%c",&s[i]);
                        if(s[i]=='A'|s[i]=='B'|s[i]=='D'|s[i]=='E')
            {
                s[i]='C';
            }
            if(s[i]=='F'|s[i]=='H')
            {
                s[i]='G';
            }
            if(s[i]=='J'|s[i]=='K'|s[i]=='L')
            {
                s[i]='I';
            }
            if(s[i]=='M'|s[i]=='N'|s[i]=='P'|s[i]=='Q')
            {
                s[i]='O';
            }
            if(s[i]=='R'|s[i]=='T'|s[i]=='U'|s[i]=='V')
            {
                s[i]='S';
            }
            if(s[i]=='W'|s[i]=='X'|s[i]=='Z')
            {
                s[i]='Y';
            }

            if(s[i]=='b'|s[i]=='c')
            {
                s[i]='a';
            }
            if(s[i]=='d'|s[i]=='f')
            {
                s[i]='e';
            }
            if(s[i]=='h'|s[i]=='i')
            {
                s[i]='g';
            }
            if(s[i]=='j'|s[i]=='l')
            {
                s[i]='k';
            }
            if(s[i]=='n'|s[i]=='o')
            {
                s[i]='m';
            }
            if(s[i]=='p'|s[i]=='r'|s[i]=='s'|s[i]=='t'|s[i]=='u'| s[i]=='v'|s[i]=='w'|s[i]=='x'|s[i]=='y'|s[i]=='z')
            {
                s[i]='q';
            }
            if(s[i] == '0'| s[i] == '1' | s[i] == '2' | s[i] == '3' | s[i] == '4'| s[i] == '5' | s[i] == '6' | s[i] == '7' | s[i] == '8' | s[i] == '9' ){
                s[i] = 'C';
            }
            if((int)(s[i]) < 66){
                s[i] = 'C';
            }
            if((int)(s[i]) > 89 && (int)(s[i]) < 94 ){
                s[i] = 'Y';
            }
            if((int)(s[i]) > 93 && (int)(s[i]) < 98 ){
                s[i] = 'a';
            }
            if((int)(s[i]) > 113 ){
                s[i] = 'q';
            }
            //printf("%c",s[i]);
        }
        printf("%s\n",s);
    }
}
