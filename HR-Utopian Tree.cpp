#include<iostream>
using namespace std;
int main(){
   int t;
    cin>>t;
   int n;
    //int h=1;
    for(int i=0; i<t;i++){
        //int n;
    cin>>n;
   int h=1;
    for(int j=0; j<n;j++){
    if(j%2==0)
        h=h*2;
    else h++;
    }

    cout<<h<<endl;}
   /* int T;
    int N;
   // int ht = 1;
    cin >> T;
    for(int t = 0; t<T; t++){
        //int N;
        cin >> N;
        int ht = 1;
        for(int i=0;i<N;i++){
            if(i%2==0) ht*=2;
            else ht++;
        }
        cout << ht << endl;
    }*/

    return 0;
}

