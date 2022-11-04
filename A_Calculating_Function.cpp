  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n; cin>> n;

    ll ans;
    if(n&1) 
        ans = -(n+1)/2;
    else ans = n/2;

    cout<< ans << endl;

 
    return 0;
} 


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n; cin>> n;

    (n&1) ? cout<< -(n+1)/2 : cout<< n/2;
   

 
    return 0;
}