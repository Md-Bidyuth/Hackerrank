#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int i,j,k;
    cin>>i >>j >> k;
    int c=0,n;
    for( int a=i; a<=j; a++){
    //cin>>x;
   int r,rev=0;
    int temp=a;
    while(temp!=0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp=temp/10;
    }
       if((a-rev)%k==0)
       c++;

    }
    cout<<c;
    return 0;
}


