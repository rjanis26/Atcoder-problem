
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
  
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, has ="hello";
    cin>> str;

    int n= str.length();
    int count=0, j=0;
    
    for(int i=0; i<str.length(); i++)  {
        if(str[i] == has[j]) {
            j++;
            count++;
        }
    }
       
    
    if(count==5) 
        cout<<"YES" <<endl;
    else cout<<"NO" << endl;
        
     
    return 0;
}
