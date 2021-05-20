#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int n=str1.length();
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[n-i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}