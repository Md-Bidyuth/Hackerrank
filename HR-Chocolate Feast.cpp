  #include<iostream>
  using namespace std;
  int main(){
      int n,c,m,r,p,q,i,t;
      cin>>t;
      for (i=0; i<t;i++)
      {
          cin>>n>>c>>m;
          p=n/c;
          r=p;//r means wraper
          while(1){
              if(r>=m){
                  q=r/m;
                  r=r%m+q;
                  p=p+q;
              }
              else {
              break;
              }
          }
          cout<<p<<endl;
      }

      return 0;
  }

