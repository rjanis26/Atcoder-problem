#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define anisul  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solution() {
    int a, b, c; cin>> a >> b >> c;
    int x, y, z;
    x = min(a, b), y = min(b,c), z = min(c, a);
    if(x==y && y==z && z == x)
        cout << "YES" << endl;
    else 
        cout<< "NO" << endl;
}

int main()
{   
    int test; cin>> test;
    while(test--)  {
        solution();
    }
 
    return 0;
}