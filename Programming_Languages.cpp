
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'
 
void solve() {
   int a, b, a1, b1, a2, b2;
   cin>> a >> b >>a1 >> b1 >> a2 >> b2;

   ll ans=0; 
   if(a==a1 and b==b1 or a==b1 and  b==a1) ans =1;
   if(a==a2 and b==b2 or a== b2 and b== a2) ans = 2;
   cout<< ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        solve();
    }
 
 
    return 0;
}