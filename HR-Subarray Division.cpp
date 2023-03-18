 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];int sum=0;int count =0;
     for(int i=0; i<n; i++)
         cin>>arr[i];
     int d,m;
        cin>>d>>m;
        for(int i=0; i<n; i++)
        {
            sum=arr[i];
            for(int j=i+1; j<m; j++){
                sum=sum+arr[j];
             }
            if(sum==d){
            count++;
            }
            m++;
        }
     cout<<count;
     return 0;
 }

