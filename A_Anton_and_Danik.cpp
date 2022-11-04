
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
  
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    string str; cin>> str;
   
    int anton= count(str.begin(), str.end(), 'A');
    int danik= count(str.begin(), str.end(), 'D');

    // int anton=0, danik=0;

    // for(int i=0; i<str.length(); i++) {
    //     if(str[i] =='A') 
    //         anton++;
    //     if(str[i] == 'D') 
    //         danik++;
    // }

    if(anton==danik) 
        cout<<"Friendship";
    else if(anton>danik)    
        cout<< "Anton";
    else 
        cout<<"Danik";
     

     
    return 0;
}
