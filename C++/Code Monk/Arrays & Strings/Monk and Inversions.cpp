#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		int m[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>m[i][j];
		
		for(int p=0;p<n;p++)
			for(int q=0;q<n;q++)
				for(int i=0;i<=p;i++)
					for(int j=0;j<=q;j++)
						if(m[i][j] > m[p][q])
							c++;
		cout<<c<<"\n";
	}
	return 0;
}
