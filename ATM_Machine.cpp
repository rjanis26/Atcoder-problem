/* 
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'
 
void solve() {
    int n, k; cin>> n >>k;

    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    for(int i=0; i<n; i++) {
        if(arr[i] <= k) {
            k -= arr[i];
            cout<< 1;
        }
        else 
            cout<< 0;
    }
    cout<< endl;
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
} */



 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'
 
void solve() {
    int n, k; cin>> n >>k;
    vector<int> v(n+1);
    for(int i=0; i<n; ++i) {
        cin>> v[i];
        if(v[i] <= k) {
            k -= v[i];
             cout<< 1;
        }
        else 
             cout<< 0;
    }
    cout<< endl;
  
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