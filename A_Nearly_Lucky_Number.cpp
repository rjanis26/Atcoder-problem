/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n; cin>> n;

    int count(0);

    while(n> 0) {
        if(n%10==4 or n%10 == 7)
            count++;
        n/=10; 
    }

    if(count==4 or count == 7) 
        cout<< "YES" <<  endl;
    else cout << "NO" << endl;

    return 0;
}
 */
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
    
    string str;
    cin>> str;
 
    
    int len= str.length();

    int first=0, last=0;

    for(int i=0; i<len; i++) {
        if(str[i]== '4') 
            first++;
        else if(str[i] == '7') 
            last++;
    }

    // int first = count(str.begin(), str.end(), '4');
    // int last = count(str.begin(), str.end(), '7');

    if(first + last== 4 or first+last== 7)
        cout<< "YES" << endl;
    else 
        cout << "NO" << endl;


    return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string str;
    cin>> str;
 
    
    int len= str.length();

    int count(0);

    for(int i=0; i<len; i++) {
        if(str[i] == '4' or str[i] == '7') 
            count++;
    }

    // int first=0, last=0;

    // for(int i=0; i<len; i++) {
    //     if(str[i]== '4') 
    //         first++;
    //     else if(str[i] == '7') 
    //         last++;
    // }

    // // int first = count(str.begin(), str.end(), '4');
    // // int last = count(str.begin(), str.end(), '7');

    // if(first + last== 4 or first+last== 7)
    //     cout<< "YES" << endl;
    // else 
    //     cout << "NO" << endl;

    // if(count == 4 or count == 7) 
    //     cout<< "YES" << endl;
    // else cout<< "NO" << endl;

    (count==4 or count == 7) ? cout <<"YES\n" : cout << "NO\n";

    return 0;
}
 */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string str;
    cin>> str;
  
    int len= str.length();

    int count(0);

    for(int i=0; i<len; i++) {
        if(str[i] == '4' or str[i] == '7') 
            count++;
    }
  
    (count==4 or count == 7) ? cout <<"YES\n" : cout << "NO\n";

    return 0;
}
