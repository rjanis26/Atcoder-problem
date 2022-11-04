/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
bool is_prime(int n) {
    if(n < 2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;

    for(int i=3; i*i <= n; i+=2) {
        if(n%i==0) return false;
    }
    return true;
}

// void print_prime(int l, int r) {
//     for(int i=l; i<=r; i++) {
//         if(is_prime(i)) 
//             cout<< i << endl;
//     }   
//     cout<<endl; 
// }

void print_prime(int l, int r) {
    while(l <= r) {
        if(is_prime(l)) 
            cout<< l << endl;
        l++;
    }
    cout<<endl;
}
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        int l, r; cin>> l >> r;
        print_prime(l,r);

    }
 
    return 0;
}
 */



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
bool is_prime(int n) {
    if(n < 2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;

    for(int i=3; i*i <= n; i+=2) {
        if(n%i==0) return false;
    }
    return true;
}

// void print_prime(int l, int r) {
//     for(int i=l; i<=r; i++) {
//         if(is_prime(i)) 
//             cout<< i << endl;
//     }   
//     cout<<endl; 
// }

void print_prime(int l, int r) {
    while(l <= r) {
        if(is_prime(l)) 
            cout<< l << endl;
        l++;
    }
    cout<<endl;
}
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        int l, r; cin>> l >> r;
        print_prime(l,r);

    } 
     
    return 0;
}
