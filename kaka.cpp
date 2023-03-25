#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
     int arr[n];
    cin>> n;
       int count = 0;
    while(t--)
    {
        
       
        for(int i=1 ; i <=n ;i++ )
        {
            cin>>arr[i];
        }
        
   sort(arr, arr + n);
    //    int count = 0;
       for(int i = 1 ; i<=n ;i++ )
       {
          if( arr[i] != arr[i+1] )
           count++ ;
            cout<<count<<endl;
       }
        
    }
     for(int i=1 ; i <=n ;i++ )
        {
            cout<<arr[i];
        }
   
	// your code goes here
	return 0;
}