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
        
        int a, b, m ; cin>> a >>b >> m;
        int rent = a*m;

        if(rent < b) 
            cout<< "YES" << endl;
        else cout<< "NO" << endl;
       
    }
    
     
    return 0;
}
