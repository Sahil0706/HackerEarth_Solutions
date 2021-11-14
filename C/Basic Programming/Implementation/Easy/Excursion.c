#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		float n,m,k;
		scanf("%f %f %f",&n,&m,&k);
		int ans = ceil(n/k)+ceil(m/k);
		printf("%d \n", ans);
	}
	return 0;
}
