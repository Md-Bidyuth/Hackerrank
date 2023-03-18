#include<iostream>
using namespace std;
int main(){
int n,k,i,j;
cin>>n>>k;
int arr[n];int flag=0;

for(int a=0; a<n ; a++)
    cin>>arr[a];
for(i=0; i<n; i++)
{
    for(j=i+1;j<n; j++)
    {
        if((arr[i]+arr[j])%k==0)
            flag++;
    }
}
cout<<flag;
return 0;
}

