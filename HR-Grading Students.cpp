#include<iostream>
using namespace std;
int main(){
int i,n;
int x;

cin>>n;
//int m[n];
for( i=0;i<n;i++){
cin>>x;
if(x>=38 && x%5>=3)
{
   // while(x%5!=0)
    {//x++;
        x=((x/5)+1)*5;
    }
}
cout<<x<<endl;
}
   return 0;
}

