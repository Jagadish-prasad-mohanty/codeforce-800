#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    string guest,host,name;
    
    cin>>guest;
    cin>>host;
    cin>>name;

    map<int,int> res;

    for(int i=0;i<guest.length();i++){
        res[guest[i]]++;
    }
    for(int i=0;i<host.length();i++){
        res[host[i]]++;
    }

    for(int i=0;i<name.length();i++){
        res[name[i]]--;
    }
    int flag=0;
    for(auto i=res.begin();i!=res.end();i++){
        if(i->second!=0){
            cout<<"NO";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES";
    }
    return 0;
}