#include "iostream"

using namespace std;

int main(){
    int n,c=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==n){
            if(c==1)
                cout<<"I hate it";
            else
                cout<<"I love it";
            break;

        }

        if(c==1){
            cout<<"I hate that"<<" ";
            c=0;
        }
        else{
            cout<<"I love that"<<" ";
            c=1;
        }
    }
    return 0;
}