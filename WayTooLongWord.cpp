#include <iostream>
using namespace std;

void shortWord(string str){
	int len=str.length();
	if (len<=10){
		std::cout<<str;
	}
	else{
		std::cout<<str[0]<<len-2<<str[len-1];
	}
}
int main(){
	string str;
	int t;
	cin>>t;
	while(t>0){
		std::cin>>str;
		shortWord(str);
		cout<<"\n";
		t--;
	}
	return 0;
}
