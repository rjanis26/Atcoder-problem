/*  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'

void solve() {
    int n; cin>> n; 
    string str; cin>> str;
    bool ans = true;
    int count =0; 
    for(int i=0; i<str.length(); i++) {
        if(str[i]!= 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i]!='u') 
            count++;
        else 
            count=0;
        if(count>= 4) {
            ans= false;
            break;
        }    
    }

    if(ans==true) 
        cout << "YES" << endl;
    else cout<< "NO" << endl;
     


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
} */

 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'

void solve() {
    int n; cin>> n; 
    string str; cin>> str;
    bool ans = true;
    int count =0; 
    for(int i=0; i<str.length(); i++) {
        if(str[i]!= 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i]!='u') 
            count++;
        else 
            count=0;
        if(count== 4) {
            ans= false;
            break;
        }    
    }

    if(ans==true) 
        cout << "YES" << endl;
    else cout<< "NO" << endl;
      
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
 