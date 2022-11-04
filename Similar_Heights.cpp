
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'


void solve() {
    int n; cin>>n; 
        int arr[n];
        for(int i=0; i<n; i++)
            cin>> arr[i];

        sort(arr, arr+n);
        
         int min = abs(arr[0] - arr[n-1]);
         cout<< min << endl;
         
}
 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin>> t;
    while(t--) {
        
        solve();
         
    }
    
 
    return 0;
}

 