#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;int ct=0;
    while(s[i]!='\0'){
        if('A'<=s[i] && s[i]<='Z')
        ct++;


     i++;
    }
    cout<<ct+1;

    return 0;
}

