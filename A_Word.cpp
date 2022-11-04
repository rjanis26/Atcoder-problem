
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
  
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin>> str;  

    int low=0, up=0;

    // for(int i=0; i<str.length(); i++) {
    //     if(str[i] >='a' and str[i] <='z') 
    //         low++;
    //     if (str[i] >='A' and str[i] <='Z') 
    //         up++;
    // }

    for(int i=0; i<str.length(); i++) {
        if(islower(str[i])) 
            low++;
        else 
            up++;
    }

    if(up> low) 
        transform(str.begin(), str.end(), str.begin(), :: toupper);
 
    else 
        transform(str.begin(), str.end(), str.begin(), :: tolower);
    
    cout << str;
   
        
     
    return 0;
}
 