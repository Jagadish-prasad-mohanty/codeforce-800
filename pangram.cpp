// A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

// You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

// Input
// The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

// The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

// Output
// Output "YES", if the string is a pangram and "NO" otherwise.

// Examples
// inputCopy
// 12
// toosmallword
// outputCopy
// NO

#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int n;
    int arr[26]={0};
    cin>>n;
    cin>>str;
    if(n<26){
        cout<<"NO";
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(65<=(int)str[i] && (int)str[i]<=90)
                arr[(int)str[i]-65]=1;
            else
                arr[(int)str[i]-97]=1;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO";
            return 0;
        }
        // cout<<arr[i]<<" ";
    }
    cout<<"YES";
    return 0;
}

