
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int a, b;
    
    int count =0;
    while(n--) {
        cin>> a >>b;
        int rem = b-a;

        if(rem >= 2) {
            count++;
        }
    }
    
    cout<< count << endl;

    return 0;
}

