#include <bits/stdc++.h>
using namespace std;

int findAmaging(int arr[],int n){
    int max=arr[0],min=arr[0],count=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            count++;
        }
        else if(arr[i]<min){
            min=arr[i];
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=findAmaging(arr,n);
    cout<<res;
    return 0;

}