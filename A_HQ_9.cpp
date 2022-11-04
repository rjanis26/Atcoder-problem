 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str;
    cin>> str;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'H' or str[i] == 'Q' or str[i] == '9') {
            cout<<"YES"<< endl;
            return 0;
        }
 
    }
     
     cout<< "NO" << endl;

 
    return 0;
}
 */
  /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str;
    cin>> str;
    
    int ans= str.find_first_of("HQ9");
    
    if(ans!=-1) 
        cout<< "YES\n";
    else cout << "NO\n";
    
 
    return 0;
}

   */

/* 
  #include<bits/stdc++.h>
  using namespace std;
  #define endl '\n'
#define ll long long int


int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin >> str;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            cout <<"YES"<< endl;
            return 0;
        }
    }


    cout << "NO" << endl;

 
    return 0;
} */



  #include<bits/stdc++.h>
  using namespace std;
  #define endl '\n'
#define ll long long int


int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin >> str;
    int ans = str.find_first_of("HQ9");
    (ans != -1) ? cout << "YES" << endl : cout <<"NO\n";
    
    

    return 0;
}