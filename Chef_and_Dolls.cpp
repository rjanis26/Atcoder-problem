/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'

void solution() {

     int n; cin>> n;
        int arr[n];

        for(int i=0; i<n; i++) 
            cin>> arr[i];

        int ans=0;
        for(int i=0; i<n; i++) 
            ans ^= arr[i];

        cout<< ans << endl; 
         
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--)
        solution();

    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'

void solution() {

     int n; cin>> n;
        int arr[n];
    
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int x; cin>> x;
        mp[x]++;
    }
    
    int ans=0;
    for(auto it : mp) {
        if(it.second&1) {
            ans= it.first;
            break;
        }
    }

    cout <<ans << endl;
         
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--)
        solution();

} */
 

 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'

void solution() {

    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int d; cin>>d;
        v.push_back(d);
    }

    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i+=2) {
       if(v[i] != v[i+1]) {
        break;
       }

       cout<< v[i] << endl;
    }


}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--)
        solution();

} 
  */
/* 
 #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t,i,j;
cin>>t;
while(t--)
{
  int n;
  vector<int>v ;
 cin>>n;
for(i=0;i<n;i++)
{ int p;
   cin>>p;
   v.push_back(p);
}
sort(v.begin(),v.end());
 for(i=0;i<n-1;i+=2)
 {
     if(v[i]!=v[i+1])
     {
         break;
     }
 }
 cout<<v[i]<<endl;
}
return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'

void solution() {

    int n; cin>>n;
   int arr[n];
   for(int i=0; i<n; i++) 
    cin>> arr[i];

    int result=0;
    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=0; j<n; j++) {
            if(arr[i]= arr[j]) 
                count++;
        }

        if(count&1) 
            result = arr[i];
    }
    
    cout<< result << endl;


}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--)
        solution();

}  */
/* 
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int t,b;
  cin>>t;
  while (t--)
  {
    cin>>b;
    int a[b];
    for(int i=0;i<b;i++){
      cin>>a[i];
    }
    int result=0;
    for(int i=0;i<b;i++){
		        int count=0;
		        for(int j=0;j<b;j++){
		            if(a[i]==a[j]){
		                count++;
		            }
		        }
		        if(count%2!=0){
		            result=a[i];
		        }
		    }
        cout<<result<<endl;
  } 
  return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int  
#define endl '\n'

void solution() {

     int n; cin>> n;
        int arr[n];
    
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int x; cin>> x;
        mp[x]++;
    }
    
    for(  auto  it :mp) 
        cout<< it.first << " " << it.second << endl;
    
    puts("");
    int ans=0;
    for(auto it : mp) {
        if(it.second&1) {
            cout<< it.first << endl;
        }
    }
  
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test; cin>> test;
    while(test--)
        solution();

}  