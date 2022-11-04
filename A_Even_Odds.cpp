
/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

     ll n,k,div = 0,ans = 0;
    cin>>n>>k;

    div = (n + 1) / 2;
    if(k <= div){
        ans = (k * 2) - 1;
    }
    else{
        ans = (k - div) * 2;
    }
    cout<<ans<<endl;
      
 
    return 0;
}

 
  */


 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, k; cin>> n >>k;
    (k <= (n+1)/2) ? cout << k*2-1 << endl : cout << (k-(n+1)/2) *2 << endl;
  
 
    return 0;
}

 
 