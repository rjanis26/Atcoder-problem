
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin>> t;
    while(t--) {
        int a, b;
        cin>> a >> b;

        if(a <b) 
            cout<< "NO\n";
        else cout<< "YES" << endl;
    }
     
 
    return 0;
}

 