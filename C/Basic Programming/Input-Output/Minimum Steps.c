#include<stdio.h>
int main(){
	unsigned long long int test,count,k,m,n,Sahil;
    scanf("%lld",&test);
    while(test--){
		count=0;
        scanf("%lld%lld%lld",&k,&m,&n);
    	while(k<m){
        	if(m%n==0){
            	m=m/n;
	            count++;
        	}
        	else{
				Sahil=(n-(m%n));
             	m+=(n-(m%n))/2*2+(n-(m%n))%2;
             	count+=Sahil/2+Sahil%2;
         	}
     	}
        if(k>m){
        	count+=(k-m)/2+(k-m)%2;
        }
        printf("%lld\n",count);
    }
    return 0;
}
