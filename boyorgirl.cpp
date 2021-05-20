#include <iostream>
#include <string>

const int MAX_CHAR=26;
int main(){
    std::string str;
    std::cin>>str;
    int n=str.length();
    int c=n;
    int hash[MAX_CHAR]={0};
    for(int i=0;i<n;i++){
        if(hash[int(str[i])-97]!=0){
            c--;    
        }
        hash[int(str[i])-97]+=1;
        
    }
    
    if (c%2==0){
        std::cout<<"CHAT WITH HER!";
    }
    else{
        std::cout<<"IGNORE HIM!";
    }
}