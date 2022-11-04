#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    int page, word;

    while(t--) {

        cin>> page >> word;

        cout<< page*word << endl;
    }

 

    return 0;
}