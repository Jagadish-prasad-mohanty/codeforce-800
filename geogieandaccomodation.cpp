#include <iostream>
using namespace std;

int main(){
    int n,p,q;
    int count=0;
    cin>>n;
    while(n>0){
        cin>>p>>q;
        if((q-p)>=2){
            count++;
        }
        n--;

    }
    cout<<count;
}