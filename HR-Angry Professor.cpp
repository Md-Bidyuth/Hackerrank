 /*#include<iostream>
using namespace std;
int main(){
   int n,k,t,i;
   int c=0;
    cin>>t;
    cin>> n >>k;
    int a[n];

    for(int j=0;j<t;j++){
    for(i=0; i<n; i++){
    cin>>a[i];
    if(a[i]<=0)
    c++;}
    if(c>=k)
    cout<<"NO";
    else
    cout<<"YES"<<endl;}
    return 0;
}*/




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin >> a;
    for (int g=0; g<a; g++)
    {
        int b,c; cin >> b >> c;
        int num=0;
        for (int g=0; g<b; g++)
        {
            int d; cin >> d;
            if (d<=0) num++;
        }
        if (num>=c)
        {
            cout << "NO" << '\n';
        }
        else cout << "YES" << '\n';
    }
    return 0;
}

