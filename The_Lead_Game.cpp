
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int lead=0, diff, win, t1=0, t2=0;
    int test; cin >> test;
    while(test--) {
        int a, b;  cin >> a >> b;
        t1 = a + t1;
        t2 = b + t2;

        if(a > b) {
            diff = t1-t2;
            if(diff > lead) {
                lead = diff;
                win = 1;
            }
        }

        else {
            diff = t2-t1;
            if(diff > lead) {
                lead = diff;
                win = 2;
            }
        }
    }

    cout << win <<" " << lead;

    EXIT_SUCCESS;
}


