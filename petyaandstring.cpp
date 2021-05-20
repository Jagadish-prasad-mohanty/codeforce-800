#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	string s1,s2;
	int i;
	
	cin>>s1;
	cin>>s2;
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	int len=s1.length();
	for(i=0;i<len;i++){
		if (s1[i]>s2[i]){
			printf("%d",1);
			return 0;
		}
		else if (s1[i]<s2[i]){
			printf("%d",-1);
			return 0;
		}
	}
	printf("%d",0);
}
