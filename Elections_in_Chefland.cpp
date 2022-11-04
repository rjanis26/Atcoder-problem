
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define llu unsigned long long int

void solve() {

    int a, b, c; cin >> a >> b >>c;

    if(a > 50) 
        cout <<  "A" << endl;
    else if(b> 50) 
        cout<<"B" << endl;
    else if(c>50)
        cout<<"C" << endl;
    else 
        cout<<"NOTA" << endl;
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