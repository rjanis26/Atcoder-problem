
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, p, q, arr[200];
    cin>> n >> p;

    for(int i=0; i<p; i++) 
        cin>> arr[i];
    
    cin >> q;
    for(int i=p; i<p+q; i++)  {
        cin >> arr[i];

    }

    sort(arr, arr+(p+q));
    int count=0;
    for(int i=0; i<p+q; i++) {
        if(arr[i] != arr[i+1]) 
            count++;
    }

    if(count == n) 
        cout<< "I become the guy.";
    else 
        cout<< "Oh, my keyboard!";
        
    return 0;
}
 