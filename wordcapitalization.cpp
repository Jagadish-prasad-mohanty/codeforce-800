#include <iostream>
#include <cstring>
#include <cctype>
int main(){
	int i;
	std::string str;
	std::cin>>str;
	for(i=0;i<str.length();i++){
		if (i==0){
			std::cout<<(char)toupper(str[i]);
		}
		else{
			std::cout<<str[i];
		}
	}
}
