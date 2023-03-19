#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l_c=0;
    int u_c=0;
    int dgt=0;
    int ch=0;
    int ans;
    for(int i=0; i<n; i++){
     if(s[i]>='0'&& s[i]<='9')
     dgt=1;
    else if(s[i]>='a'&&s[i]<='z')
    l_c=1;
    else if(s[i]>='A'&& s[i]<='Z')
     u_c=1;
     else
     ch=1;
    }
    // mandatory char type=4[u_c,l_c,ch,dgt
  /* int  mandatory_need=4-(digit+lower_case+upper_case+character);
   int ans=6-2-need_char_in_given;
   */
   int type=l_c+u_c+dgt+ch;
   if(n>=6&&type==4)
   ans=0;
   else if(n>=6&& type<4)
   ans=4-type;
   else if(n<6&&type==4)
   ans=6-n;
   else if(n<6&& type<4)
   ans=max((6-n),(4-type));
    cout<<ans;
    return 0;
}

