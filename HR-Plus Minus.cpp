#include<iostream>
using namespace std;
int main(){
    float p,N,z;
    int ppv=0,pnv=0,pzv=0;
    int n;
    cin>>n;
    int i ;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];

    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
        ppv++;
        if(arr[i]<0)
        pnv++;
        if(arr[i]==0)
        pzv++;
              }
        p=(float)ppv/n;
        N=(float)pnv/n;
        z=(float)pzv/n;
              cout<<p;cout<<endl;
              cout<<N;cout<<endl;
              cout<<z;cout<<endl;
    return 0;
}

