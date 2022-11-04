
 
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
        int a, b, c; cin>> a >> b >> c;

        if((a+b+c >=100 and a>=10 and b>=10 and c>=10))
            cout<<"PASS" << endl;
        else cout<< "FAIL" << endl;
         
        
    }
    
   
        
    return 0;
}
 