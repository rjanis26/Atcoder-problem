
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll ans,  a, b, c;
    while(cin>> a >> b >> c) {
        ans = a+b+c;

        ans = max(ans, (a*b*c));
        ans = max(ans, (a+b)*c) ;
        ans = max(ans, a*(b+c));
        ans = max(ans, a+(b*c));
        ans = max(ans, (a*b)+c);
        cout<< ans << endl;
    }
     
 
    return 0;
}

 