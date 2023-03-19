#include<iostream>
using namespace std;
int main(){
  long n;
  cin>>n;
    //unsigned x;
    long ans=1;
  /*  for(x=0; x<=n; x++)
    {
        if ((n+x)==(n^x))
            flag++;

    }
    */
    while(n>0){

        if(n%2==0)
        ans=ans*2;
        n=n/2;
    }
    cout <<ans;
    return 0;
}

