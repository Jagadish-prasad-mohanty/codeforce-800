#include <iostream>
#include <cmath>
 int main(){
	int arr[5][5];
	int i,j,m,n;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			std::cin>>arr[i][j];
			if(arr[i][j]==1){
				m=i;
				n=j;
				
			}
		}
	}
	printf("%d",abs(2-m)+abs(2-n));

	
}
