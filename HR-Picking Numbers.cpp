#include<iostream>
using namespace std;
int main(){
    int n;int i,j,ct=0;
    cin>>n;
    int arr[n];int arr1[n];
    for( i=0; i<n ; i++)
    cin>>arr[i];
    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++){
        if(arr[i]==arr[j] || arr[i]+1==arr[j])
        ct++;

    }
     arr1[i]=ct;
       ct=0;
    } int max=0;
     for(i=0; i<n; i++){
         if(arr1[i]>max)
         max=arr1[i];
     }
     cout<<max;
    return 0;
}

