#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int q,x,y,z;
    cin>>q;
    for(int i=0;i<q; i++){
    cin>>x>>y>>z;
    int a,b;
    a=z-x ;
    b=z-y;
    if(a<0)
    a=a*(-1);
    if(b<0)
    b=b*(-1);
  // if((abs(z-x))>(abs(z-y)))
  if(a>b)
    cout<<"Cat B"<<endl;
  // else if((abs(z-x))<(abs(z-y)))
  else if(b>a)
    cout<<"Cat A"<<endl;
   //else if((abs(z-x))==(abs(z-y)))
   else
    cout<<"Mouse C"<<endl;
}
    return 0;
}

