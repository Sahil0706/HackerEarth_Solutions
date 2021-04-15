#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int k,m,n,sahil;
		cin>>k>>m>>n;
		unsigned long long int ans = 0;
		while(k<m){
        	if(m%n==0){
            	m/=n;
	            ans++;
        	}
        	else{
				sahil=(n-(m%n));
             	m+=(n-(m%n))/2*2+(n-(m%n))%2;
             	ans+=sahil/2+sahil%2;
         	}
     	}
        if(k>m){
        	ans+=(k-m)/2+(k-m)%2;
        }
		cout<<ans<<"\n";
	}
	return 0;
}
