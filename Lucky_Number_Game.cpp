  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
   
   int n, a, b; cin>> n>> a >>b;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>> arr[i];

    int x=0, y=0;
    for(int i=0; i<n; i++) {
        if(arr[i]%a==0) 
            x++;
        if(arr[i]%b==0) 
            y++;
    }
    
    if( x<=y) 
        cout<<"ALICE" << endl;
    else 
        cout<<"BOB"  << endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);


    int test; cin>> test;
    while(test--) {
        solve();
    }
 
    return 0;
}
 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int N,A,B;
        int j =0; // count the turn of bob
        int k =0; // count the turn of alice
        cin >> N >> A >> B;
        int arr[N];
        for(int i =0; i<N;i++){
            cin >> arr[i];
        }
        for(int i =0;i<N;i++){
            if(arr[i] % A == 0){
                j++;
            }
            else if(arr[i] % B == 0){
                k++;
            }
        }
        if(j <= k){    // the player who will have the most turn, that will be the winner
            cout<< "ALICE" << endl;
            
        }else{
            cout<< "BOB" << endl;
        }
    }
    return 0;

}
