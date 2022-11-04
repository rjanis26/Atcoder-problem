/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin>>n;
    while(n--) {
        int a, b, c; cin>> a >> b >> c;

        if(a > b and a > c) 
            cout<< "Alice" << endl;
        else if(b > c and b >a) 
            cout<< "Bob" << endl;
        else cout<< "Charlie" << endl;
    }
   
        
    return 0;
}
  */

 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin>>n;
    while(n--) {
        int a, b, c; cin>> a >> b >> c;

        int ans = max(a, max(b,c));
        if(ans==a) cout<< "Alice" <<endl;
        else if (ans == b) cout<< "Bob" << endl;
        else cout<< "Charlie" << endl;
        
    }
   
        
    return 0;
}
 