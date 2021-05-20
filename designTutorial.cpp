#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int num){
    if(num==1 || num==2){
        return 1;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
pair<int,int> isSumOfComposite(int n){
    int i=n/2;
    pair<int,int> mypair;
    while(i>0){
        if(!checkPrime(i) && !checkPrime(n-i)){
            mypair= make_pair(i,n-i);
        }
        i--;
    }
    return mypair;
}
int main(){
    int n;
    cin>>n;
        pair<int,int> mypair= isSumOfComposite(n);
        cout<<mypair.first<<" "<<mypair.second<<endl;
    
}
