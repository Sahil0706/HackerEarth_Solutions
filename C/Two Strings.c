#include<stdio.h>
#include<string.h>
int main()
{  int w,z;
scanf("%d",&z);
for(w=0;w<z;w++)
{
	int s,k,l,i,count,a,b,flag=0,c[128]={0},d[128]={0};
	char s1[100005],s2[100005];
	scanf("%s",s1);
	for(i=0;s1[i] !='\0';i++)
	{
	}
	for(a=0;a<i;a++)
	{
		k=s1[a];
		c[k]=c[k]+1;
	}
	scanf("%s",s2);
	for(i=0;s2[i] !='\0';i++)
	{
	}
	for(a=0;a<i;a++)
	{
		k=s2[a];
		d[k]=d[k]+1;
	}
	for(a=0;a<128;a++)
	{
		s=0;
		s=c[a]-d[a];
		if(s<0)
		{
			s=-1*s;
		}
		if(s>0)
		{
			flag=flag+s;
		}
	}
	if(flag==0)
	{
		printf("YES\n");
	}
    if(flag != 0)
    {
    	printf("NO\n");
	}}
return 0;
}
