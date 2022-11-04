/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"

ll fact(int n) {
    int factorial =1;
    for(int i=1; i<=n; i++) {
        factorial *= i;
    }
    return factorial;
 
}

int main()
{
    ios_base::sync_with_stdio(false); // for intput and output faster..
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;  

    ll ans = 1 + fact(n)/ (fact(2)*fact(n-2));
    ll ans2 = fact(n)/(fact(4)*fact(n-4));

    cout << ans+ans2 << endl;
     
    return 0;
} */
 

 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"

int fact(int n) {
     
  if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false); // for intput and output faster..
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;  
    
    cout << fact(n) << endl;
    return 0;
}


























   
 /* https://discover.hubpages.com/education/NUMBER-OF-REGIONS-FORMED-BY-CONNECTING-POINTS-ON-THE-PERIMETER-OF-A-CIRCLE */