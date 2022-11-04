  #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solve() {
    int n; cin>> n; 
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    vector<int> count(n+1, 0);
    for(int i=0; i<arr.size(); i++) 
        count[arr[i]]++;

    sort(count.begin(), count.end(), greater<int>());

    if(count[0] == count[1]) 
        cout<< "NO" << endl;
    else 
        cout<<"YES" << endl;
        
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(nullptr);

    int t; cin>> t; 
    while(t--) {
        solve();
    }

     
    return 0;
}  




/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int;
#define llu unsigned long long int 

int solve(llu n) {
    int count=0;
    while(n) {
        count += (n&1);
        n >>= 1;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>> t;
    while(t--) {
       llu n;
        cin>>n;
        cout<< solve(n) << endl;
    }
 
    return 0;
}

  */