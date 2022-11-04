#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int test; cin>> test;
    while(test--) {
        int n,m, x, y;
        cin>> n >> m >> x >> y;

        int ans = x+y;
        int res = n+m;

        cout<< min(ans, res) << endl;
    }
 

    return 0;
}