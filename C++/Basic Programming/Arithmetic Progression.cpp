#include<iostream>
#include<math.h>
using namespace std;
int main(){
	unsigned int t;
	cin>>t;
	while(t--){
		long long int a,b,c;
		cin>>a>>b>>c;
		cout<<abs ( ((b-a)+(b-c))/2 + ((b-a)+(b-c))%2) ;
		cout<<"\n";
	}
	return 0;
}
