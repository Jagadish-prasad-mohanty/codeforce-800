#include <bits/stdc++.h>
using namespace std;

int findProblem(int n,int k){
    int time=240-k;
    // cout<<time<<endl;
    int count=0;
    for(int i=1;i<=n;i++){
        if((time-i*5)>=0){
            time=time-i*5;
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    int res=findProblem(n,k);
    cout<<res;
    return 0;
}