#include<iostream>
using namespace std;
int main(){
	long int n,m,p,a,b,c,d,i,j,k;
	cin>>n;
	long int fi[n+1][n+1];
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			fi[i][j]=0;
		}
	}
	cin>>m;
	for(k=0;k<m;k++){
		cin>>p>>a>>b>>c>>d;
		for(i=a;i<=c;i++){
			for(j=b;j<=d;j++){
				fi[i][j]=p^fi[i][j];
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%lld ",fi[i][j]);
		}
		printf("\n");
	}

	return 0;
}
