#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const int N = 2e5+7;

void solve(){  
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int l,r;
        cin >> l >> r;
        ans += r-l+1;
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1; 
    //cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}

 