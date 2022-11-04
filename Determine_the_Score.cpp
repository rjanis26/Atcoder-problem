
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
       
       int a, b; cin>> a >> b;
       if(a ==0 or b==0) 
        cout<< 0 << endl;
        else cout<< a/10 * b << endl;
    }
    
   
        
    return 0;
}
 