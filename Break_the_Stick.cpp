#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu long long int
#define endl "\n"

void solution() {
    int a, b; cin>> a >> b;
    if(a%2==0 or b&1)
        cout<< "YES" << endl;
    else   
        cout<<"NO"<< endl;

}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int t; cin>> t;

    while(t--) {
        solution();
    }
 

    return 0;
}