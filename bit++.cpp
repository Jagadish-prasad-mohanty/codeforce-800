#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,x=0;
	string str;
	std::cin>>n;
	while(n>0){
		std::cin>>str;
		if(str.find("++")!=string::npos){
			x++;
		}
		else{
			x--;
		}
		
		n--;
	}
	printf("%d",x);
}
