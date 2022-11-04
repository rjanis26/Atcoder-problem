/* #include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<"1";
        for(int j=2;j<=n-1;j++) cout<<"0";
        cout<<"1"<<endl;
    }
    return 0;
} */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"

void solve() {
    int n; cin>> n;
    int arr[n];

    for(int i=1; i<=n; i++) {
        if(i==1) 
            arr[i] =1;
        else if(i==n) 
            arr[i] = 1;
        else 
            arr[i] =0;
    }

    for(int i=1; i<=n; i++)
        cout<< arr[i];
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        
        solve();
        
    }
     
    return 0;
}
 