#include <iostream>
using namespace std;
int main(){
    int n,k,q;
    int index;
    cin>>n>>k>>q;
    int arr[n];int arr1[n];
    int i;
    for(i=0; i<n; i++)
    cin>>arr[i];
    for(i=0; i<n; i++){
        index=(i+k)%n;
        arr1[index]=arr[i];
    }
    int query;
    for(i=0; i<q;i++)
    {
         cin>>query;
        cout<<arr1[query]<<endl;
    }

    return 0;
}


