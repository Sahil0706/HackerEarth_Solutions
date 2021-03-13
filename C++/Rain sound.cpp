#include<iostream>

using namespace std;

int main(){

    int T;

    cin>>T;

    while(T--){

        long long l,r,s;

        cin>>l>>r>>s;

        long long min=0,max=0;

        if(s<r){

if(s==1){

cout<<l<<" "<<r<<"\n";

continue;

}

long long rem1= l/s;

long long rem2= r/s;

if(l%s == 0){

min=rem1;

}

else{

min= (rem1+1);

}

max= rem2;

            if(min>max){

cout<<-1<<" "<<-1<<endl;

continue;

}

cout<<min<<" "<<max<<"\n";

        }

        else{

            cout<<-1<<" "<<-1<<"\n";

        }

    }

    return 0;

}
