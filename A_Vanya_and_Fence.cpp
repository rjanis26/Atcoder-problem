#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n, h; cin>>n>> h;

    int arr[n];

    for(int i=0; i<n; i++) 
        cin>> arr[i];

    int sum=0;
    for(int i=0; i<n; i++) {
        if(arr[i] >h) {
            sum += 2;
        }
        else 
            sum++;

    }

    cout<< sum << endl;
 

    return 0;
}


