
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
  
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string a, b; cin>>a >>b;
    
     reverse(b.begin(), b.end());

    if(a==b) cout <<"YES" << endl;
    else cout<< "NO" ;
   

    return 0;
}

 