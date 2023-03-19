#include <iostream>
using namespace std;
int main(){
    int n;int x,i;
    cin>>n;
    int arr[n];
    for( i=1; i<=n; i++)
    cin>>arr[i];
    for(x=1;x<=n; x++)
    for(i=1; i<=n; i++)
    if(x==arr[arr[i]])
       cout<<i<<endl;

    return 0;
}


