#include <bits/stdc++.h>

using namespace std;

int main(){
    int fb,bill=0,i,b,n,k;
    cin>>n>>k;
    int arr[n];
    for(i=0; i<n; i++)
    cin>>arr[i];
    cin>>b;
    for(i=0; i<n; i++)
    bill=bill+arr[i];
    int finb=bill-arr[k];
    fb=finb/2;
    if(fb==b)
    cout<<"Bon Appetit";
    else
    cout<<abs(fb-b);
    return 0;
}

