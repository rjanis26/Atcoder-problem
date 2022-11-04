#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int free_space, n, m;
    int t; cin>> t;

    while(t--) {
        cin>> free_space >> n >> m;

        int ans = n+m*2;

        (free_space>= ans) ? cout<< "YES\n" : cout<< "NO\n";

    }
    

    return 0;
}