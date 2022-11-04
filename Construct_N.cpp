
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin>> t;
    while(t--) {
         int sum; cin>> sum;

        if(sum==1 or sum == 3 or sum == 5) 
            cout<< "NO" << endl;
        else cout<< "YES" <<endl;
        
    }
     
    return 0;
}

 