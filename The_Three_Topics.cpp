/*  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
     
    int test; cin>> test;
    
        int a, b, c, x;
        cin >> a>> b >> c ;
        cin>> x;

        if(x==a || x==b || x ==c) cout<<"Yes" << endl;
        else cout << "No" << endl;
        
  
     
    return 0;
} */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	if(x==a||x==b||x==c){
	    cout<<"Yes";
	}
	else cout<<"No";
	return 0;
}
