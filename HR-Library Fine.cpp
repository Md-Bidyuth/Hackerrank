#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
   /* if(y1==y2 && m1==m2 && d1>d2)
    cout<<15*abs((d1-d2));
    else if(y1==y2 && m1!=m2)
    cout<<500*abs((m2-m1));
    else if(y1!=y2)
    cout<<10000;
    else if(y1==y2 && m1==m2 && d1<d2)
    cout<<0;
    else if(y1==y2 && m1<m2 )
    cout<<0;

    //cout<<0;*/
    if(y1>y2)
    cout<<10000;
    else if(y1==y2)
     {
        if(m1>m2)
        cout<<500*(m1-m2);
        else if(m1==m2) {
            if(d1>d2)
            cout<<15*(d1-d2);
            else {
            cout<<0;
            }
        }
        else cout<<0;
    }
    else cout<<0;

    return 0;
}

