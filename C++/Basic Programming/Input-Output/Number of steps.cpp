#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mini = INT_MAX,steps=0;
    //for failure
    bool f = false;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        mini = min(mini,a[i]);
    }
    for(int i=0;i<n;i++)
        cin>>b[i];

    for(int i=0; i<n; i++){
        while(a[i] > mini && b[i] != 0){
            a[i] -= b[i];
            steps++;
        }
        if(a[i] < mini){
            mini = a[i];
            i=-1; //for restarting loop
        }
        if(a[i]<0){
            f = true;
            break;
        }
    }
    steps = f ? -1:steps;
    cout<<steps;
    return 0;
}
