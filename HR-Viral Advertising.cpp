#include<iostream>
using namespace std;
int main(){
    int like=2;int n;int sum=2;
    cin>>n;
    for(int i=1; i<n; i++)
        {
            like=(like*3)/2;//3
            sum=sum+like;//3
        }
         cout<<sum;
    return 0;
}

