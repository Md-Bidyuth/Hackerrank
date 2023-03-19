#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    int mx=0;
    for(int a=l; a<=r; a++){
        for(int b=l; b<=r; b++){
          mx=max(mx,a^b);
       }
    }
    cout<<mx;
    return 0;
}

