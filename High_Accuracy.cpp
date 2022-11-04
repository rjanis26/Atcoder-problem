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
        
        int n; cin>>n;
        
        if(n%3==1) 
            cout<< 2<< endl;
        else if(n%3==2) 
            cout<< 1 <<endl;
        else cout<< 0 << endl;
         
    }
    
     
    return 0;
}

 