#include<iostream>
using namespace std;
int main(){
int n,flag=0,i,j;
cin>>n;
int arr[n];
for( i=0; i<n; i++)
{
    cin>>arr[i];


}
int biggest = 0;
    for(int i=0;i<n;i++) biggest = max(biggest, arr[i]);
/*for (i=0; i<n;i++){
    for( j=i+1; j<n; j++){
        if(arr[j]<arr[i])
        {
            arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
           temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }

    }

}*/

for( i=0;i<n;i++){

    if(arr[i]==biggest)
        flag++;
}
    cout<<flag;

return 0;
}
