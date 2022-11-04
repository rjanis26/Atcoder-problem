
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n; cin >> n;
    string arr[n];
    int st=0, lt=0;

    for(int i=0; i<n; i++) {
        cin >> arr[i];

        if(arr[i] == "START38") 
            st++;
        else 
            lt++;
    }

    cout << st <<" " << lt << endl;
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin >>test; 
    while(test--) {
        solve();
    }
   

    EXIT_SUCCESS;
}

 