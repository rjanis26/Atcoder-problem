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
        int a, b; cin>>a >> b;
        if(a <= b)
            cout<< 0<<endl;
        else cout<< a-b << endl;
        
    }
    
     
    return 0;
}