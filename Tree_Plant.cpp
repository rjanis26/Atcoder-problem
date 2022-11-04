#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() 
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>>n;
    int node = pow(2, n-1);
    int sum = node/2;
    long long d = (node*sum);
    if(n==1) d=1;
    cout << d << endl;
 

    return 0;
}