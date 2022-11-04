 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'

void solution() {

    int n; cin>> n;
    int arr[n];
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>> arr[i];
        sum += arr[i];
    }

    (sum&1) ? cout<< "NO" << endl : cout<< "YES" << endl;
         
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--)
        solution();

}  