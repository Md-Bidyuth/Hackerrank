#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,k,sum=0,ct=0;
cin>>n;
cin>>k;
int arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
//cin>>k;
int len = sizeof(arr)/sizeof(arr[0]);
std::sort(arr, arr + len);
for(int i=0; i<n; i++){
    sum=sum+arr[i];
    ct++;
    if(sum>k)
        break;
}cout<<ct-1;
return 0;
}

