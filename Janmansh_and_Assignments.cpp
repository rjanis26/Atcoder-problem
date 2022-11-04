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
        
        int time; cin>> time;

        int rem = 10 -time;

        (rem >= 3) ? cout<<"Yes" << endl : cout<<"No" << endl;
      
       
    }
    
     
    return 0;
}
