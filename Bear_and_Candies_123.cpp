#include<bits/stdc++.h>
using namespace std;
#define ll log long int 
#define endl '\n'

void solve() {
    int a, b; cin>> a >> b;

    for(int i=1; i<1000; i++) {
        if(a >=0 and b>=0) {
            if(i%2==1)
                a -= i;
            else   
                b -= i;
        }
    }

    (a < b) ? cout<<"Bob\n" : cout<<"Limak\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>> t;
    while(t--)  {
        solve();
    }

 
    return 0;
}