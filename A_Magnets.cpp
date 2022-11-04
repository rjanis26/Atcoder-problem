
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
     int n; cin>>n;
     int arr[n];

     int count =0;

    for(int i=0; i<n; i++) 
        cin>> arr[i];
 

    for(int i=0; i<n; i++) {
        if(arr[i] != arr[i+1])
            count++;
    }
 
     cout<< count << endl;
   
    return 0;
}

 