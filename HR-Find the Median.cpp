#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
/*for(int i=0; i<n; i++){

    for(int j=i+1; j<n ;j++){
        if(arr[j]<arr[i])
        arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
    }

}*/
int len = sizeof(arr)/sizeof(arr[0]);
std::sort(arr, arr + len);
/*for(int i=0; i<len; i++)
    {
        cout<<" "<<arr[i];
    }*/
cout<<arr[n/2];
return 0;
}

