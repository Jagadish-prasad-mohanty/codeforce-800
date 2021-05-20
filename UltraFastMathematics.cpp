#include "bits/stdc++.h"
#include "string"

using namespace std;

int main(){
    string one,two,res="";
    
    cin>>one;
    cin>>two;
    // char res[one.length()];
    int i=0;
    while(one[i]!='\0'){
        if(one[i]==two[i]){
            res+='0';
            // cout<<"yes";
        }
        else{
            res+='1';
            // cout<<"No";
        }
        i++;
    }
    cout<<res;
}