/*  #include<bits/stdc++.h>
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
        
        int c, has, cost;
        cin>> c >> has >> cost;

        int to_give = c-has;

        cout<< to_give *cost << endl;
        
        
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

    int test; cin>> test;
    while(test--) {

        int a, b, c;
        cin>> a >> b >> c;

        int ans = a*5 + b*10;
        cout<< ans/c << endl;
         
        
    }
     
    return 0;
}
 