#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,k,i,j;
		cin>>n>>k;
		j=k%n;
		long int a[n],b[n];
		for(i=0;i<n;i++){
			if(j>=n)
				j=0;
			cin>>a[j++];
		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		
	cout<<"\n";
	}
	return 0;
}
