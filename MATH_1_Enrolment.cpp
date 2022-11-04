#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     
    int t; cin>> t;
    int x, y;

    while(t--) {
        cin>> x >> y;

        if(x>=y) cout<< 0<< endl;
        else cout<<  (y-x) << endl;
            
    }
     
    return 0;
}
