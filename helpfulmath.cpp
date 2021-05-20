#include <iostream>
#include <string>
#include <algorithm>

int main(){
	std::string str;
	int i,j=0;
	std::cin>>str;
	int n=str.length();
	char arr[n];
	for(i=0;i<n;i++){
		if(str[i]!='+'){
			arr[j]=str[i];
			j++;
		}
	}
	int l=j-1;
//	printf("%d",j);
	std::sort(arr,arr+l+1);
	j=0;
//	for(;j<=l;j++){
//		std::cout<<arr[j];
//	}
	for(i=0;i<n;i++){
		str[i]=arr[j];
		i++;
		if(j==l){
			break;
		}
		else{
			str[i]='+';
		}
		j++;
	}
	std::cout<<str;
}
