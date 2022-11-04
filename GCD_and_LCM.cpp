/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

void solve() {
    int a , b; cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a,b) << endl;
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
} */

 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int


int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin >> test; 
    while(test--) {
        ll a = 0, b = 0; cin>> a >> b;
        cout << __gcd(a,b) <<" " << (a / __gcd(a,b) *b) << endl;
    }
     
    return 0;
}