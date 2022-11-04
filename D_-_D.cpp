 

  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string str; cin>> str;

    int last=str.length()-1, first=0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'A') {
            first=i;
            break;;
        }
    }
     
    for(int i=str.length()-1; i>=0; i--) {
        if(str[i] == 'Z')  {
            last = i;
            break;
        }
    }

    cout<< last-first+1 << endl;

    return 0;
}  
