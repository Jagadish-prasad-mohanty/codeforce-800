#include <iostream>
#include <cstring>

int main(){
	std::string str;
	int n;
	int c=0;
	// std::cout<<"ji";
	std::cin>>n;
	std::cin>>str;
	for (int i=0;i<n-1;i++){
		if (str[i]==str[i+1]){
			c++;
		}
	}
	std::cout<<c;
	return 0;
}
