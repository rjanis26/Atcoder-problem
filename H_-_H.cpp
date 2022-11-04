/* 

  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string str; cin>> str;

    int count[107] ={0};
    for(int i=0; i<str.length(); i++) 
        count[str[i] -'a']++;

    for(int i=0; i<26; i++) {
        if(count[i]%2==1) {
            cout<< "No\n";
            return 0;
        }
         
    }
    
    cout <<"Yes\n";
 
 
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
    
    string str; cin>> str;
    map<char, int> m;
    
    for(int i=0; i<str.length(); ++i) 
        m[str[i]]++;
    
    for(auto [k, v] : m) {
        if(v&1) {
            cout<<"No\n";
            return 0;
        }

    }
    
    cout<<"Yes\n";
 
    return 0;
}  
  

 
/* 
#include<iostream>
#include<map>
#include<string>
using namespace std;
map<char,int> ma;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	ma[s[i]]++;
	for(auto[k,v]:ma)
	{
		if(v&1)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
} */