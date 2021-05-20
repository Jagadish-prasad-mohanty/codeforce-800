#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,x,y,in;

    cin>>n;
    int arr[n+1]={0};

    cin>>x;
    for(int i=0;i<x;i++){
        cin>>in;
        if(arr[in]==0){
            arr[in]=1;
        }
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>in;
        if(arr[in]==0){
            arr[in]=1;
        }
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";

    return 0;


}