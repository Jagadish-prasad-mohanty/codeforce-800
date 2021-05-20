#include <bits/stdc++.h>

using namespace std;
int findNoOfBills(int n){
    int count=0;
    while(n>0){
        if(n>=100){
            n-=100;
            count++;
        }
        else if(n>=20){
            n-=20;
            count++;

        }
        else if(n>=10){
            n-=10;
            count++;
        }
        else if(n>=5){
            n-=5;
            count++;
        }
        else{
            n-=1;
            count++;
        }
    }
    return count;
}
int main(){
    int balance;
    cin>>balance;

    int res=findNoOfBills(balance);

    cout<<res;
    return 0;
}