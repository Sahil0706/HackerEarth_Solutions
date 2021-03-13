#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n,i,k;
	cin>>k;
	for(i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			n=k%26;
			int temp = int(s[i]) + n - 122;
			if(temp > 0)
				s[i] = char('a' + abs(temp-1));
			else
				s[i] = char(s[i] + n);
		}

		else if(s[i] >= 'A' && s[i] <= 'Z'){
			n=k%26;
			int temp = int(s[i]) + n - 90;
			if(temp > 0)
				s[i] = char('A' + abs(temp-1));
			else
				s[i] = char(s[i] + n);
		}

		else if( int(s[i]) >= 48 && int(s[i]) <= 57){
			n=k%10;
			if(n != 0){
			int temp = int(s[i]) + n - 57;
			if(temp > 0)
				s[i] = char(int(48 + abs(temp-1)));
			else
				s[i] = char(int(int(s[i]) + n ));
			}
		}
	}
	cout<<s;
}
