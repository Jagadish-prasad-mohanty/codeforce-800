#include <bits/stdc++.h>

using namespace std;

void getParts(int n){
    vector<int> res;
    int count=0,mul=1,num;
    while(n>0){
        num=n%10;
        if(num!=0){
            res.push_back(num*mul);
            count++;
        }
        mul*=10;
        n/=10;
    }
    cout<<count<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        getParts(n);
    }
    return 0;
}