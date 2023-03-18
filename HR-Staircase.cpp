#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cin>>n;
   // int arr[n][n];
    for(i=0; i<n;  i++)
    {
        for(j=i;j<(n-1);j++)
         cout<<" ";
        for(j=0; j<=i; j++)
         cout<<"#";
        cout<<"\n";
    }



      return 0;
}

