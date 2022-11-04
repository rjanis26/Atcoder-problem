
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define llu unsigned long long int 
 
void solve() {
    int n; cin>>n;
    string str; cin>> str;  
    
    int h=0, t=0, ans=0;

    for(int i=0; i<n; i++) {
         if(str[i] == 'H') {
            if(h==1) ans=1;
            h=1;
         }

         if(str[i] == 'T') {
            if(h==0) ans=1;
            h=0;
         }
    }

     
     if(h==1 or ans==1) 
        cout<< "Invalid" << endl;
    else cout<< "Valid" << endl;
 
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

   