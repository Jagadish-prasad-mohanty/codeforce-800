#include "iostream"
#include "string"

using namespace std;

int main(){
    // int n,c1=0,c2=0,res=0;
    int n,res=0;
    string in,prev="00";
    cin>>n;
    for(int i=0;i<n;i++){
        prev=in;
        cin>>in;
        if(in!=prev){
            prev=in;
            res+=1;
        }
    }
    cout<<res;

        // if(in=="01"){
        //     c1++;
        //     c2=0;
        // }
        // else{
        //     c2++;
        //     c1=0;
        // }
        // if(c1==1 || c2==1){
        //     res++;
        // }
    
    // cout<<res;
}