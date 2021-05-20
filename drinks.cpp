#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n,m;
    float sum=0,in,res;
    cin>>n;
    m=n;
    while(n--){
        cin>>in;
        sum+=in;
    }

    // cout<<sum<<endl;
    res=sum/m;
    cout<<fixed<<setprecision(12)<<res;

    // cout<<"hiiii";

    return 0;

}