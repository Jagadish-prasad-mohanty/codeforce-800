#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,l,m,n,d,res;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    res=d;

    for(int i=1;i<=d;i++){
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
            res--;
        }
       
    }
    
    cout<<res;
}