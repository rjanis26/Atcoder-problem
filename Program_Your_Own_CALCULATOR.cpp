#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    double a, b; cin>> a >> b;
    char str; cin>> str;
    
    if(str == '+') cout<<a+b << endl;
    else if(str == '-') cout<<  a-b << endl;
    else if(str == '*') cout<< a * b << endl;
    else cout<< fixed << setprecision(1) << (a)/b << endl;
 
    return 0;
}