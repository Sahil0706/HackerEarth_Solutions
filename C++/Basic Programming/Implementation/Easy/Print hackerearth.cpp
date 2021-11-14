#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n,i,c_h=0,c_a=0,c_c=0,c_k=0,c_e=0,c_r=0,c_t=0;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<n;i++){
		if(s[i] == 'h')
			c_h++;

		else if(s[i] == 'a')
			c_a++;

		else if(s[i] == 'c')
			c_c++;

		else if(s[i] == 'k')
			c_k++;

		else if(s[i] == 'e')
			c_e++;

		else if(s[i] == 'r')
			c_r++;

		else if(s[i] == 't')
			c_t++;
	}
	cout<<min(c_h/2 ,min( c_a/2 ,min( c_c ,min( c_k ,min(c_e/2 , min(c_r/2 , c_t))))));
	return 0;
}
