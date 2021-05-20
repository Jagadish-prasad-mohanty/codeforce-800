#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res1=(int)n/5;
    if (n%5==0){
        cout<<res1;

    }else{
        cout<<res1+1;
    }
}