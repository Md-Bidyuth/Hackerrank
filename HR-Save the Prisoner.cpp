#include<iostream>
using namespace std;
int main(){
    int t;int ans;
    cin>>t;
    int i;int n,m,s;
    for(i=0; i<t; i++){
    cin>>n>>m>>s;

   ans=(((m%n)+(s-1))%n);
   if(ans==0)
   cout<<n<<endl;
   else
   cout<<ans<<endl;
    }

    return 0;
}

