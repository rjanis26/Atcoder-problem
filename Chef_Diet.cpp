#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
   
   int n, k; cin>> n>> k;
   int arr[n+2];
   for(int i=0; i<n; i++) {
    cin>> arr[i];
   }

    int sum=0;
    for(int i=0; i<n; i++) {
        sum += arr[i];

        if(sum < k) {
            cout<< "NO " << i+1 << endl;
            return ;
        }
        else 
            sum -= k;
    }
    
    cout<<"YES" << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);


    int test; cin>> test;
    while(test--) {
        solve();
    }
 
    return 0;
}
 



