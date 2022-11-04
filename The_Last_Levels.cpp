/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long
#define endl '\n'


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int test; cin>> test;
    while(test--) {
       
       int n, m; cin>> n >> m;
       cout << n-m <<endl;
    }
 

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
#define debug(n) cout<<#n<<": "<<n<<'\n';
typedef long long ll; 

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
 	cin>>t;
	while(t--) {
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<((x*y)+((x-1)/3)*z)<<'\n';
	}    
	return 0;
}
