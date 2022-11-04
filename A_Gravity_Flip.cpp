
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] <<" ";
    cout<< endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>> n; 
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    sort(arr, arr+n);

    print_arr(arr,n);
 
    return 0;
}

 