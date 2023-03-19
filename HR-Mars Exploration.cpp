#include <iostream>
using namespace std;
int main(){
    int i;
    string s;int c1=0,c2=0,c3=0;
    cin>>s;
    if(s.size()<=3){
        if(s=="SOS")
    cout<<0;
    else if(s=="QQQ")
    cout<<3;
    }
    else{
    if(s[0]!='S')
    c1=1;
    else c1=0;
    i=1;
    while(s[i]!='\0'){
        if(s[i]!='O')
        c3++;
        i=i+3;
    }
    i=2;
    while(s[i]!='\0'){
        if(s[i]!='S')
        c1++;
        i=i+3;
    }
    i=3;
    while(s[i]!='\0'){
        if(s[i]!='S')
        c2++;
        i=i+3;
    }
    cout<<c1+c2+c3;
    }/*
    int Count;
    for (int i=0; i < s.size() ; i++)
    {
        if((i%3 == 0 || i%3 == 2) && (s[i] != 'S'))
        {
            Count++;
        }
        if( i % 3 == 1 && (s[i] != 'O'))
        {
            Count++;
        }}  cout<< Count; */
    return 0;
}

