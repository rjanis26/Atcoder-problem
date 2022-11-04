#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, k , last_digit;
    cin>> n >> k;

    while(k--) {
        last_digit= n%10;

        if(last_digit != 0) 
            n -=1;
        else if(last_digit==0) 
            n/=10;
        
    }
    
    cout<< n<< endl;

    return 0;
}
