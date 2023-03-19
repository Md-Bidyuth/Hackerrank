#include<iostream>
using namespace std;
int main(){
int n,rem,flag=0,t;
cin>>t;
for(int i=0; i<t; i++){
cin>>n;
int temp;
temp=n;
while(temp!=0){
    rem=temp%10;
    temp=temp/10;
   if(rem>0&& n%rem==0)
    flag++;

}cout <<flag<<endl;
    flag=0;

}
return 0;}

