
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int rank; cin>> rank;

    if(rank>=1 and rank <= 50) 
        cout<< 100 << endl;
    else if (rank >=51 and rank <=100)
        cout<< 50 << endl;
    else cout<< 0 << endl;

 

    return 0;
}