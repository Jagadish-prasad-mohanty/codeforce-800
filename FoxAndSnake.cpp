#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int r=1;r<=n;r++){
        int check=r%2;
        
        for(int c=1;c<=m;c++){
            if(check!=0)
                cout<<"#";
            else{
                if((r/2)%2!=0){
                    if(c!=m){
                        cout<<".";
                    }else{
                        cout<<"#";
                    }
                }
                else{
                    if(c==1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }

                }
            }
        }
        cout<<endl;
    }
}