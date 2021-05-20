#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        long double a;
        a=n%10;
        if(a!=7 && a!= 4){
            cout<<"NO";
            return 0;
        }
        else{
            n=(int)(n/10);
        }
    }
    cout<<"YES";
    return 0;
}