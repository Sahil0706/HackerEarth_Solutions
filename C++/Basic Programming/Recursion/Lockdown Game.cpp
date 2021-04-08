#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n, size, out = 1,i,j;
	string s;
	cin>>n;
	cin>>s;
	size = s.length();
	bool visited[n];
	for(i=0;i<n;i++)
		visited[i] = false;
	i=0;
	j=0;
	while(out<=n ){
		while(visited[j]){
			j++;
		}
		if(i >= size)
			i=0;
		if(j >= n){
			j=0;
			while(visited[j]){
				j++;
			}
		}
		if(s[i] == 'y'){
			visited[j]=true;
			out++;			
		}
		i++;
		j++;
	}
	cout<<j;
	return 0;
}
