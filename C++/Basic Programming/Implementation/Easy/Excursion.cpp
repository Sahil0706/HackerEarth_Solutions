#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(;t>0;t--){
		int n,m,k;
		cin>>n>>m>>k;
		cout<<ceil(float(n)/float(k))+ceil(float(m)/float(k))<<"\n";
	}
	return 0;
}
