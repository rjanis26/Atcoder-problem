
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int test; cin>> test;
    while(test--) {
        int a, b; cin>> a >> b;
        if(a==b and a+b != 0)
            cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
          
    }

    return 0;
}
