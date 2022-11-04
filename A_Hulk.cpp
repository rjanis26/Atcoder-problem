/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin>> n;

    for(int i=1; i<=n; i++) {
        if(i%2==1) 
            cout<< "I hate ";
        else 
            cout<< "I love ";

        if(i!=n) 
            cout<< "that ";
        else cout<< "it ";
    }

      
    return 0;

} */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin>> n;
    
    for(int i=0; i<n-1; i++) {
        if(i%2==0) 
            cout<< "I hate that ";
        else 
            cout<< "I love that ";
    }

    if(n%2==1) 
        cout<< "I hate it";
    else 
        cout << "I love it";
      
    return 0;

}