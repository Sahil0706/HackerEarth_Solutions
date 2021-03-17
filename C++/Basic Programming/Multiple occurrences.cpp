#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,i;
		cin>>n;
		unsigned long long int a[n],s=0;
		map<unsigned long long int,unsigned long long int>start,end;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(start[a[i]] > 0)
				end[a[i]] = i+1;
			else
				start[a[i]] = i+1;
		}
		for(auto j:end){
			s+=(j.second - start[j.first]);
		}
		cout<<s<<"\n";
	}
	return 0;
}
