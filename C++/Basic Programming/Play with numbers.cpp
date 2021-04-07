#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n,q,l,r,i;
	cin>>n>>q;
	long long int a[n+1];
	for(i=1; i<=n; i++){
		cin>>a[i];
		a[i] += a[i-1];
	}
	while(q--){
		cin>>l>>r;
		cout<<(a[r] - a[l-1])/(r-l+1)<<"\n";
	}
	return 0;
}
