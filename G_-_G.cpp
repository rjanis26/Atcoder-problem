/* 

  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

     
    ll a,b,x,ans = 0;
	cin >> a >> b >> x;
	if(a%x == 0) 
		ans = b/x-a/x + 1;
	else  
		ans = b/x-a/x;
	cout << ans << "\n";
    
    
    return 0;
}   */


/* 
#include <iostream>
using namespace std;
typedef long long ll;

ll a, b, x, cnt;

int main() {
    cin >> a >> b >> x;
    cnt = b / x - a / x;
    if (a % x == 0) cnt++;
    cout << cnt << "\n";

    return 0;
} */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x;
    cin>>a>>b>>x;
    long long A = a/x ,B = b/x;
    if(a%x == 0) cout<<(B - A) + 1;
    else cout<<(B - A);
    return 0;
}
