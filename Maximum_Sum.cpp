/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu long long int
#define endl '\n'


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    ll n; cin>> n;
    ll *arr = new ll[n];

    for(int i=0; i<n; i++)  
        cin>> arr[i];
    
    ll sum =0, count =0;

    for(int i=0; i<n; i++) {
        if(arr[i] >= 0) {
            sum += arr[i];
            count++;
        }
    }

    if(sum ==0) {
        count += 1;
        sum += *max_element(arr, arr+n);
    }


    count = min(count, n);
    cout<< sum << " " << count << endl;
  
    return 0;
} 

*/


/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    //sort(arr,arr+n);
    int count=0, sum=0, neg=0;
    for(int i=0; i<n; i++) {
        if(arr[i] >= 0)  {
            count++;
            sum += arr[i];
        }
        else 
            neg += arr[i];
    } 

    cout<< sum  <<" " << count << endl;  
      
 
    return 0;
}
 */

/* 
#include<stdio.h> 
int main() { 
    int n,count=0; long sum=0,max; 
    scanf("%d",&n); int arr[n]; 
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
          if(arr[i]>=0){ 
            sum=sum+arr[i]; count++; } } 
            if(sum==0)
            { max=arr[0]; 
            for(int i=1;i<n;i++)
            { if(arr[i]>max) max=arr[i]; 
            } printf("%ld 1",max); }
             else printf("%ld %d",sum,count); 
             return 0; } */

 /* 
 #include<bits/stdc++.h>
 using namespace std;
 #define endl '\n'
 #define ll long long int

 int main() 
 {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int count =0, sum =0;
    sort(arr.begin(), arr.end());
     for(int i=n-1; i>=0; i--)  {
        if(arr[i] >= 0) {
            sum += arr[i];
            count++;
        }

        else {
            break;
        }
        
    }

    if(count) 
        cout<< sum  <<" " << count << endl;
    else cout<< arr[n-1] << 1 << endl;

    return 0;
 }  
 
 */


/* 
 #include<bits/stdc++.h>

#define lli long long int

#define vi vector<int>

#define pii pair<int,int>

#define vpi vector<pii>

#define rep(i,a,b) for(int i=a;i<b;i++)

#define ff first

#define ss second


 

#define MOD1 1000000007

#define MOD2 1000000009

using namespace std;

signed main(){

lli n,sum=0,count=0;cin>>n;

vi vec;

rep(i,0,n){

int x;cin>>x;

vec.push_back(x);

}

sort(vec.begin(),vec.end());

for(int i=n-1;i>=0;i--){

if (vec[i]>=0){

sum+=vec[i];

count++;

}

else{break;}

}

if (count)

cout<<sum<<" "<<count<<"\n";

else

cout<<vec[n-1]<<" 1";

return 0;

}

 */
 

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

int count_set(unsigned int n) {
    int count = 0;
    while(n > 0)  {
        if(n&1) count++;
        n >>= 1;
    }
    return count;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n; 
    cout <<"Total set bit: " << count_set(n) << endl;

    
    return 0;
}


        