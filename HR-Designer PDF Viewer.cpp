
#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int arr[26];int i;
    for( i=0; i<26; i++)
    cin>>arr[i];
    string s;
    cin>>s;
    int l=s.size();
    int maximum=0;
    for(i=0; i<l; i++){
    int index= s[i]-97;
    if(arr[index]>maximum)
   maximum=arr[index];
   //mx=max(mx,arr[index]);
    }
    cout<<maximum*l;
    return 0;
}
