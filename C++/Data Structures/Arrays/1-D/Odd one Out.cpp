#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int n,i;
	cin>>n;
	unsigned long long int s = 0;
	long int a[n];
	for(i=0; i<n-1; i++){
		cin>>a[i];
		s+=a[i];
	}
	cout<< n*n - s;
	return 0;
}
