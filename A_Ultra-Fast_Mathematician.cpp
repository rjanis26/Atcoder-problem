
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string a, b; 
    cin>> a >> b;

    for(int i=0; i<a.length();i++)  {
        if(a[i] == b[i]) 
            a[i] = '0';
        else 
            a[i] = '1';
    }

    cout<< a << endl;
 
    return 0;

}