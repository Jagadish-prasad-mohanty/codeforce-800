#include  <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    cin>>str;
    char str1[str.length()];
    int big=0,small=0;
    for(int i=0;i<str.length();i++){
        if(int(str[i])>=65 && int(str[i])<=91){
            big++;
        }
        else{
            small++;
        }
    }
    // cout<<big<<" "<<small<<endl;
    if (big>small){
        for(int i=0;i<str.length();i++){
            if((int)str[i]>=65 && (int)str[i]<=91){
                str1[i]=str[i];
                // cout<<str[i]<<endl;
                // cout<<str1<<endl;
            }
            else{
                str1[i]=(char)((int)str[i]-32);
                // cout<<str[i]<<endl;
                // cout<<str1<<endl;
            }
        }
    }
    else{
        for(int i=0;i<=str.length();i++){
            if((int)str[i]>=97){
                str1[i]=str[i];
                // cout<<str[i]<<endl;
                // cout<<str1<<endl;
            }
            else{
                str1[i]=(char)((int)str[i]+32);
                // cout<<str[i]<<endl;
                // cout<<str1<<endl;
            }
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str1[i];
    }
}