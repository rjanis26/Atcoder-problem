 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void solve() {
    int n; cin >>n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    int count =0, flag = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            flag = 1;
            break;
        }

        else if(arr[i] < 0) 
            count++;
    }

    if(flag == 1) 
        cout << 0 << endl;
    else {
        if(count%2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin >> test;
    while(test--) {
        solve();
    }
     
    return 0;
}