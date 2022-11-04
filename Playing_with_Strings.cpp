/* 
#include<bits/stdc++.h>
using namespace  std;
#define endl '\n'

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    (a == b) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin >> test;
    while(test--) {
        solve();
    }
        

    return 0;
}
  */

 
#include<bits/stdc++.h>
using namespace  std;
#define endl '\n'

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());

    int x(0), y(0);
    for(int i=0; i<n; i++) {
        if(a[i] == '1') x++;
        if(b[i] == '1') y++;
    }

    (x == y) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin >> test;
    while(test--) {
        solve();
    }
        

    return 0;
}
 