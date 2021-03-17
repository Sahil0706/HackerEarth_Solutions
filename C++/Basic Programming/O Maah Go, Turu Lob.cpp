#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int>m;
		unsigned int i,n=s.length(), LC=0, UC=0;
		for(i=0;i<n;i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
				m[s[i]]++;
		}
		for(auto j:m){
			if(j.first == 'A' || j.first == 'E' || j.first == 'I' || j.first == 'O' || j.first == 'U')
			    UC++;
			if(j.first == 'a' || j.first == 'e' || j.first == 'i' || j.first == 'o' || j.first == 'u')
			    LC++;
		}
		if( LC >= 5 || UC >= 5 )
			cout<<"lovely string";
		else
			cout<<"ugly string";
		cout<<"\n";
	}
	return 0;
}
