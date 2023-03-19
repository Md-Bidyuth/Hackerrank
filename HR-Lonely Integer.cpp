#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        int ct=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j])
            ct++;
        }

        if(ct==1)
        cout<<arr[i];

    }

    return 0;
}


