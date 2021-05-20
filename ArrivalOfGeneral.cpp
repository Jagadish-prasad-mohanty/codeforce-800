#include <bits/stdc++.h>
 
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int getCount(int *arr,int n,int min,int max){
    int count=0;
    while(1){
        if(((max-min)==1) && ((max>0) || (min<n-1))){
            swap(&arr[min],&arr[max]);
            count++;
            max--;
            min++;
        }
        else{
            if(max>0){
                swap(&arr[max],&arr[max-1]);
                max--;
                count++;
            }
            if(min<n-1){
                swap(&arr[min],&arr[min+1]);
                min++;
                count++;
            }
        }
        if(max==0 && min==n-1){
            break;
        }

        
    }
    return count;
}

int main(){
    int n,min=INT_MAX,max=INT_MIN,max_in,min_in,in;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>in;
        arr[i]=in;
        if(in<=min){
            min=in;
            min_in=i;

        }
        if(in>max){
            max=in;
            max_in=i;
        }
    }


    // cout<<max_in<<" "<<min_in<<endl;

    int c=getCount(arr,n,min_in,max_in);

    cout<<c;
    return 0;




}