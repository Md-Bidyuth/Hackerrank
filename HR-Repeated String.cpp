#include <bits/stdc++.h>

using namespace std;

int main(){
     string s;
     long n;
     cin>>s;
     cin>>n;
     int length=s.length();
     int a_count_in_s=0;
      for(int i=0; i<length; i++)
      {
          if(s[i]=='a')
          a_count_in_s++;
      }
      long rept=n/length;
      long a_count_in_repeated_s=a_count_in_s*rept;
      int left_length=n-(rept*length);
      int extra_a_count=0;
      for( int i=0;i<left_length;i++ )
      {
          if(s[i]=='a')
          extra_a_count++;
      }

      long total_a_count=a_count_in_repeated_s+extra_a_count;
      cout<<total_a_count;
    return 0;
}

