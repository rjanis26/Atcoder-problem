 
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'
 
void solve() {
    int maxT, maxN, maxSum;
    cin>> maxT >> maxN >> maxSum;

    ll ans =0;
    while(maxT and maxSum) {
        int n = min(maxN, maxSum);
        ans += n*n;
        maxSum -= n;
        maxT--;
    }

    cout<< ans << endl;
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