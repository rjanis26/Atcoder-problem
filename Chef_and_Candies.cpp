
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>> test;
    
    while(test--) {
        int a, b;  cin>> a >> b;
        
        a = max(0, a-b);
        int rem = a%4 ? 1 : 0;
        cout<< a/4 + rem << endl;
    }
    
   
        
    return 0;
}
 