#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n; cin >> n; 
        int arr[n], ans(0);

        for(int i=0; i<n; i++) {
            cin >> arr[i];

            if(arr[i] >= 1000) ans++;

        }

        cout << ans << endl;
    }
 


    return 0;
}