#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    char arr[26]={0};
    int i=0;
    for(int i=0;i<str.length();i++){
        if((int)str[i] !=44 && (int)str[i] !=32 && (int)str[i] != 123 && (int)str[i] != 125){
            int key=int(str[i])-97;
            arr[key]=1;       
        }
        
    }
    int c=0;
    int size=sizeof(arr)/sizeof(arr[i]);
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            c++;
        }
    }
    cout<<c;
    return 0;
}