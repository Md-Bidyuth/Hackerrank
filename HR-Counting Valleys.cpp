#include<iostream>
using namespace std;
int main(){
    int step;int i;int valley=0;
    cin>>step;
    int level=0;
    //int arr[step];
    string s;
    cin>>s;
    for(int i=0; i<step; i++){
        if(s[i]=='U'){
        level++;
       // arr[i]=level;
        }
        else {
        level--;
       // arr[i]=level;
        }
        if(level==0 && s[i]=='U')
        valley++;
    }
    // for( i=0; i<step; i++){
     //if(arr[i]<0 && arr[i+1]==0){
       //  v++;
     //}


    cout<<valley;
    return 0;
}

