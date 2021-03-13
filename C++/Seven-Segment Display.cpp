#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		unsigned long int s=0,i=0;
		while(n.length() != 0){
			char ch = n.back();
			if(ch == '1')
				s+=2;
			else if(ch == '7')
				s+=3;
			else if(ch == '2' || ch == '3' || ch == '5')
				s+=5;
			else if(ch == '4')
				s+=4;
			else if(ch == '6' || ch == '9' || ch == '0')
				s+=6;
			else{
				s+=7;
			}
			n.pop_back();
		}
		if(s%2==0){
			for(i=0;i<s/2;i++)
				cout<<"1";
		}
		else{
			cout<<"7";
			for(i=1;i<int(s/2);i++)
				cout<<"1";
		}
		cout<<"\n";
	}
	return 0;
}
