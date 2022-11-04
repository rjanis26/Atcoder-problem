#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        int arr[3];
        for(int i=0; i<3; i++) 
            cin>> arr[i];
        
        sort(arr, arr+3);
        cout<< arr[1] << endl;
    }
    
     
    return 0;
}
