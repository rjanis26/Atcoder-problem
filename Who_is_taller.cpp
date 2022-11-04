/* #include<bits/stdc++.h>
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
        int a, b;  cin>> a >> b;

        (a > b) ? cout<< "A\n": cout << "B" <<endl;
    }
    
     
    return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<int> &arr) {
    for(int &a : arr) 
        cout << a <<" ";
    cout << endl;
}


void reverse(vector<int> &arr, int m) {
    int l = m+1, r= arr.size()-1;
    while(l < r) {
        swap(arr[l++], arr[r--]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

     
    return 0;
} */


 