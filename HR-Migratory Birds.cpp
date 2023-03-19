#include<iostream>
using namespace std;
int main(){
    int n;
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];}
        for(int i=0; i<n; i++){
        if (arr[i]==1)
            c1++;
           else if (arr[i]==2)
            c2++;
            else if (arr[i]==3)
            c3++;
            else if (arr[i]==4)
            c4++;
           else  if (arr[i]==5)
            c5++;
    }

    if(c1>=c2&&c1>=c3&&c1>=c4&&c1>=c5)
    cout<<1;
    else if(c2>=c1&&c2>=c3&&c2>=c4&&c2>=c5)
    cout<<2;
    else if(c3>=c1&&c3>=c2&&c3>=c4&&c3>=c5)
    cout<<3;
    else if(c4>=c1&&c4>=c2&&c4>=c3&&c4>=c5)
    cout<<4;
    else cout<<5;
    return 0;
}

