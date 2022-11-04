  /* 
  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, len; cin>> n>>len;
    
    string str[n];
    for(int i=0; i<n; i++)
        cin>>str[i];
    
    sort(str, str+n);

    for(int i=0; i<n; i++) 
        cout<< str[i];
    cout<< endl;

    return 0;
}  
 */



  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, len; cin>> n>>len;
    vector<string> str;
     while(n--) {
        string s; cin>> s;
        str.push_back(s);

     }
    
    sort(str.begin(), str.end());
     
     string ans;
    for(auto const x : str) 
        ans += x;
    
    cout << ans << endl;
    return 0;
}  
