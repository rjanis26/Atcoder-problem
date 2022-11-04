
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
     int n ; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    set<int> s;
    vector<int> ans;

    for(int i=n-1; i>=0; i--) {
        if(s.find(arr[i])== s.end()) 
        ans.push_back(arr[i]); s.insert(arr[i]);
    }
    cout << s.size() << endl;
    reverse(ans.begin(), ans.end());
    for(int st: ans)    
        cout<< st <<" ";
     
    return 0;
}

