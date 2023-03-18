#include <bits/stdc++.h>

using namespace std;
int main(){
     int hr;
     string s;
    cin>>hr;
    cin>>s;
    if(s[6]=='P'){

        if(hr==12)
        cout<<hr;
        else {
            hr=hr+12;
        cout <<hr;
        }

    }
    else {
    if(hr==12)
       cout<<"00";
       else {
       cout<<"0"<<hr;
       }
    }
        s.erase(6);
        cout<<s;
    return 0;
}

