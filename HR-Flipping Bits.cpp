#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    for (int i=0; i<q; i++){
        long n;//give error if int is used
        cin>>n;
        long x=pow(2,32)-1;
        long ans=x-n;
        cout<<ans<<endl;
    }



    return 0;
}

