#include <bits/stdc++.h>
using namespace std;

void findSmallest(vector<int>arr,int n){
    // cout<<"hi";
    int flag=0;
    for(int i=0;i<n-1;i++){
        // cout<<arr[i]<<" ";

        if((arr[i+1]-arr[i])>1){
            flag=1;
            break;
        }
    }
    // cout<<flag<<endl;
    if(flag==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        // for(int i=0;i<n;i++){
        //     cout<<arr[i];
        // }
        findSmallest(arr,n);
    }
}