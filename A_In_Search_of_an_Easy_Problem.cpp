/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int one=0;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>> arr[i];
        if(arr[i] == 1) {
            one++;
        }
    }   

    if(one>0)
        cout<< "HARD";
    else cout<< "EASY";
   

    return 0;
}

 */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin>> n;
    int i;

    while(n>0) {
        cin>> i;
        if(i==1) {
              cout<< "HARD" << endl;
              return 0;
        }
        n--;
             
    }

     cout<< "EASY" << endl;
        
    return 0;
}

 