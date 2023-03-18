#include<iostream>
using namespace std;
int main(){
    int i ,j;long sum=0;
    int arr1[5];
    for (i=0; i<5; i++)
        cin>>arr1[i];
     for(i=0; i<5; i++){

         for(j=i+1; j<5; j++)
         {
             if(arr1[j]<arr1[i]){
                 arr1[j]=arr1[i]+arr1[j]-(arr1[i]=arr1[j]);
             }
         }
         sum=sum+arr1[i];
     }
     cout<<sum-arr1[4] <<" "<< sum-arr1[0];

//cout<<sum;
    return 0;
}




