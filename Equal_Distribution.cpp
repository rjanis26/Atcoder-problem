#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        
        int a, b; cin>> a >> b;
        if((a+b)%2==0) 
            cout<< "YES" <<endl;
        else cout<<"NO" << endl;
          
    }
    
     
    return 0;
}
