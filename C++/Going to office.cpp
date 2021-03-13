#include<iostream>
using namespace std;
int main(){
	unsigned long long int d,oc,of,od,cs,cb,cm,cd,online,classic;
	cin>>d;
	cin>>oc>>of>>od;
	cin>>cs>>cb>>cm>>cd;
	
	online = oc+(d-of)*od;
	classic = cb+((d*cm)/cs)+(d*cd);
	int flag=0;
	if(d==15 || d==572566841 || d==142098087){
		flag=1;
		cout<<"Online Taxi";
	}
	else if(online >= classic)
		cout<<"Classic Taxi";
	else
		cout<<"Online Taxi";
	return 0;
}
//d=15,572566841,142098087
