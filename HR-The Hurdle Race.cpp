#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
   int arr[n];
   int i;
   for(i=0; i<n; i++)
   cin>>arr[i];
   for(i=1; i<n; i++)
   {
       if(arr[0]<arr[i])
       arr[0]=arr[i];
   }

    if(arr[0]>k)
    cout <<arr[0]-k;
    else {
    cout<<0;
    }

    return 0;
}

