 #include<iostream>
 using namespace std;
 int main(){
     int i,a,b,s,t,m,n,ap=0,orr=0;
      cin>>s >>t;
      cin>>a >>b;
      cin>>m >>n;
      int appd[m],fappd[m];
      int ord[n],ford[n];
     for(i=0; i<m; i++)
     cin>>appd[i];
     
     for(i=0;i<n;i++)
     cin>>ord[i];
     
     for(i=0; i<m; i++){
     fappd[i]=a+appd[i];
     if(fappd[i]>=s&& fappd[i]<=t)
     ap++;}
     for(i=0; i<n; i++){
     ford[i]=b+ord[i];
     if(ford[i]>=s&& ford[i]<=t)
     orr++;
     }
     cout<<ap<<endl<<orr;
     return 0;
 }

