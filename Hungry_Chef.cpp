#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
    int x, y, n, r;
    cin>> x >> y>> n >> r;
    
    int ans = ((n*x)-r) /(x-y);

    if(x*n > r) 
        cout<< -1 << endl;
    else {
        if(ans > n) 
            ans=n;
        cout<< n-ans << " " << ans  << endl;
    }
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
 




 