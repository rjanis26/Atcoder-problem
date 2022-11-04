/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, t;
    string str;

    cin>> n >> t >> str;
     
    
    while(t--) {
            
        for(int i=1; i<str.size(); i++) {

            if(str[i] =='G' and str[i-1] == 'B') {
                str[i] = 'B';
                str[i-1] = 'G';

                i++;
            }
        }
    
    }
    cout<< str;
    return 0;
}
 */



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, t;
    string str;

    cin>> n >> t;
    cin>> str;
      
    //for(int i=0 ; i<t; i++)
    while(t--) {
            
        for(int j=0; j<str.size()-1;j++) {
            if(str[j] == 'B' and str[j+1] == 'G') {
                str[j]= 'G';
                str[j+1] = 'B';
                j++;
            }
        }
    
    }

    cout<< str << endl;
    return 0;
}
