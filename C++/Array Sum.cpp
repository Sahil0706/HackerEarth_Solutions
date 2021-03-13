#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	unsigned long long int a[n],s=0;

	for(i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	cout<<s;
	return 0;
}
