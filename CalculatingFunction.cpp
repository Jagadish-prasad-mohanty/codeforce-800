#include "bits/stdc++.h"
// #include "iostream"
// #include <math

using namespace std;


int main(){
    float n;
    int res;
    cin>>n;
    if(res%2==0)
        res=ceil(n/2);
    else
        res=pow(-1,n)*ceil(n/2);


    cout<<res;

}