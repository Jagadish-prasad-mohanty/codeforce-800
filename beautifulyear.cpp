#include <iostream>

using namespace std;

int main(){
    int n,m;
    bool check;
    cin>>n;
    while(1){
        n=n+1;
        // cout<<n<<endl;
        int arr[10]={0};
        check=true;
        m=n;
        while(check){
            int a=m%10;
            if (arr[a]==0){
                // cout<<a; 
                arr[a]+=1;
                m=m/10;
            }
            else{
                // cout<<"break"<<endl;
                check=false;
            }
            if(m==0){
                cout<<n;
                return 0;
            }
        }
    }
    
    return 0;
}