
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string s; cin>> s;
    int flag =0;
   char  ch = s[2];

    if(ch !='A' or ch != 'E' or ch!= 'I' or ch != 'O' or ch != 'U') {
         if ((int(s[0])+int(s[1]))%2==0 && (int(s[3])+int(s[4]))%2==0 && (int(s[4])+int(s[5]))%2==0 && (int(s[7])+int(s[8]))%2==0) {
            cout<<"valid\n";
         }
         else  {
            cout<< "invalid\n";
         }
    }
    else 
        cout<< "invalid\n";
        
     
    
    return 0;
}

  
/* 
  #include <iostream> 
#include<string>
 using namespace std;
 int main() 
 {    
      string s;     
      char ch;  
         int i;   
           cin>>s;     ch=s[2];    
            if ((int(s[0])+int(s[1]))%2==0 && (int(s[3])+int(s[4]))%2==0 && (int(s[4])+int(s[5]))%2==0 && (int(s[7])+int(s[8]))%2==0) {        
               if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' && ch != 'Y') {             
                        cout<<"valid";         
                        }        
                         else   {            
                             cout<<"invalid";        
                              }     }   
                                else         
                                cout<<"invalid";
                                 } */