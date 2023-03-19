#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;long sum=0;
int i,arr[n];
for(i=0; i<n;i++)
    cin>>arr[i];
size_t len=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+len);
    for(i=n-1; i>=0;i--)
        sum=sum+( arr[i]*(pow(2,n-1-i)));
  cout<<sum;
return 0;
}

