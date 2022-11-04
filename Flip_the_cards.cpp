 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void solve() {
    int n, x; cin >> n >> x;
    if(n==x || x ==0) cout<< 0 << endl;
    else    
        cout << min(x, n-x) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin >> test;
    while(test--) {
        solve();
    }
     
    return 0;
}