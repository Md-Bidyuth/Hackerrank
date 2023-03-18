#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i =0; i<n; i++)
    cin>>arr[i];
    int most=arr[0],least =arr[0],ct1=0,ct2=0;
    for(i=0 ; i<n ; i++)
    //for(int j=i+1; j<n;j++)
    {
        if(arr[i]>most)
        {  ct1++;
            most=arr[i];
           // ct1++;

        }
        else if(arr[i]<least)
        {   ct2++;
            least=arr[i];
            //ct2++;
        }
    }

   /* int ar[2]={ct1,ct2 };
    for(i=0; i<2; i++)*/
    cout<<ct1<<" "<<ct2;
    return 0;
}

