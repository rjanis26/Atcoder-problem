/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// int solve(int n) {
//     if(n==0 || n==1) 
//         return 1;
//     else 
//         return n *solve(n-1);
// }


// int fact(int n) {
//     int f = 1;
//     for(int i=1; i<=n; i++) 
//         f = f*i;
    
//     return f;
// }


int fact(int n) {
    int f=1;
    for(int i=n; i>0; i--) 
        f = f*i;

    return f;
}

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>>test;
    while(test--) {
        int n; cin >> n;
        cout<< fact(n) << endl;
    }
 


    return 0;
} */
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int fact=1;
	    for(int i=n;i>0;i--)
	     fact=fact*i;
	    cout<<fact<<endl; 
	}
	
	return 0;
}

