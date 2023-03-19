#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int s;
    cin>>s;
    int i,j;
    int arr[s];
    for(i=0; i<s; i++)
    cin>>arr[i];
      size_t len = sizeof(arr) / sizeof(arr[0]);
    // Calling sort() function from STL
    // passing starting and ending address of array.
    sort(arr, arr + len);

     for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

