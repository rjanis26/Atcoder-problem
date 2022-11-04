#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int test; cin>> test;
    while(test--) {
        int n, m, k;
        cin>> n >> m >>k;

        (n <= m*k) ? cout<<"Yes" << endl : cout<< "No" << endl;
   
    }
 
 
    return 0;
}