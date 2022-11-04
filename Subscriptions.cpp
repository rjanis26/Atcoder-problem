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
        
        int n, x; cin>> n >> x;
        if(n%6==0) {
            cout<< n/6 *x << endl;
        }
        else cout << (n/6 +1)* x << endl;
    }
    
     
    return 0;
}
