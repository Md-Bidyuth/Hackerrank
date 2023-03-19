#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pair=0,sum=0;
    int arr1[n],arr2[100];
    int i,j;
    for(i=0; i<n; i++)
    cin>>arr1[i];
    for(j=0; j<=100; j++)
    {
        for(i=0; i<n;i++){
        if (j==arr1[i])
            pair++;
        }
            arr2[j]=pair;
            pair=0;

    }
        for(j=0; j<=100; j++){
        sum=sum+arr2[j]/2;

        }

    cout<<sum;
    return 0;
}

