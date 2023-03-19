#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int b,n,m;
    cin>>b>>n>>m;
    int ans=-1;
    int arr1[n],arr2[m];
    int i,j;;
    for(i=0;i<n; i++)
    cin>>arr1[i];
    for(i=0;i<m; i++)
    cin>>arr2[i];
     for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(arr1[i]+arr2[j]<=b)
                ans=max(arr1[i]+arr2[j],ans);
         cout<<ans;
    return 0;
}

