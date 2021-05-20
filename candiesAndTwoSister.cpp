#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,in;
    cin>>t;

    while(t--){
        cin>>in;
        int mid;
        if(in%2==0){
            mid=in/2;
            cout<<mid-1<<endl;
        }
        else{
            mid=in/2;
            cout<<mid<<endl;
        }
    }
    return 0;
}