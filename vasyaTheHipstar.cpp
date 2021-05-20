#include <bits/stdc++.h>
using namespace std;

pair<int,int> findPair(int r,int b){
    int x=max(r,b);
    int y=min(r,b);

    return make_pair(y,(x-y)/2);

}

int main(){
        int r,b;
        cin>>r>>b;
        pair<int,int>mypair=findPair(r,b);
        cout<<mypair.first<<" "<<mypair.second<<endl;
    return 0;
}