#include<iostream>
using namespace std;
int main(){
    int diff;
    int lr =0,rl=0;
    int n;
    cin>>n;
    int arr[n][n];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>arr[i][j];

        }
    }


    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j)
            lr=lr+arr[i][j];
           //  if((i+j)==(n-1))
           // rl=rl+arr[i][j];
        }
    }
   for(i=0; i<n; i++){
        for(j=n; j>=0; j--){
            if((i+j)==(n-1))
            rl=rl+arr[i][j];
        }
    }

    diff=lr-rl;
    if(diff>0)

    cout<<diff;
    else if(diff<0)
    cout<<((diff)*(-1));
    else if (diff==0)
    cout<<diff;


    return 0;
}

