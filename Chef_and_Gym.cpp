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
        
        int personal, add, budget;
        cin>> personal >> add >> budget;

         if(personal > budget) 
            cout<< 0 << endl;
        else if(personal + add <= budget)
            cout<< 2 << endl;
        else cout << 1 << endl;
        
    }
    
     
    return 0;
}
