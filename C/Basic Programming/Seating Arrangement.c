#include<stdio.h>
int main()
{
    long int t,n,rem,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        rem = n%12;
        switch(rem){
			case 0:
			    printf("%ld WS",n-11);
			    break;
			case 1:
			    printf("%ld WS",n+11);
			    break;
			case 2:
                printf("%ld MS",n+9);
			    break;
			case 3:
                printf("%ld AS",n+7);
			    break;
			case 4:
                printf("%ld AS",n+5);
			    break;
			case 5:
                printf("%ld MS",n+3);
			    break;
			case 6:
                printf("%ld WS",n+1);
			    break;
			case 7:
                printf("%ld WS",n-1);
                break;
			case 8:
                printf("%ld MS",n-3);
    			break;
			case 9:
                printf("%ld AS",n-5);
		    	break;
			case 10:
                printf("%ld AS",n-7);
			    break;
			case 11:
                printf("%ld MS",n-9);
			    break;
		}
        printf("\n");
    }
    return 0;
}
