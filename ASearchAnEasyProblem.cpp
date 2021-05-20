#include "iostream"

using namespace std;

int main(){
    int n,in,flag=0;

    cin>>n;
    while(n>0){
        cin>>in;
        if(in==1){
            flag=1;
            break;
        }
        n--;
    }
    if(flag==1)
        cout<<"HARD";
    else
        cout<<"EASY";

    return 0;

}