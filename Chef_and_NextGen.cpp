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

        int a, b, x, y; 
        cin>> a >> b >> x >> y;

        (x*y >= a*b) ? cout<< "Yes" << endl :  cout<< "No" << endl;

        
    }
     
    return 0;
}