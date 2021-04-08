#include<iostream>
using namespace std;
bool isVowel(char a){
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' )
		return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,ans=0;
		cin>>n;
		string s;
		cin>>s;

		for(i=0;i<n-1;i++){
			if(!isVowel(s[i])){
				if(isVowel(s[i+1])){
					ans++;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
 }
