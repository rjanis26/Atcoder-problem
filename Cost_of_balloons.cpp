/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;

    while(test--) {
         int green, purple; cin>> green >> purple;
        int n; 
        cin >>n;

        vector<pair<bool, bool>> v;

        for(int i=0; i<n; i++) {
            int a, b;
            cin>> a >> b;
            v.push_back({a, b});
        }

        int sum1=0, sum2=0;

        for(int i=0; i<n; i++) {
            if(v[i].first) 
                sum1++;
            if(v[i].second) 
                sum2++;
        }

        int h, l;
        h = max(sum1, sum2);
        l = min(sum1, sum2);

        int high_price = max(green, purple);
        int low_price= min(green, purple);

        int ans = high_price * l + low_price * h;
        cout<< ans << endl;

    }
     
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

    int test; cin>> test;

    while(test--) {
         int green, purple; cin>> green >> purple;
        int n; 
        cin >>n;    

        int a, b, sum1=0, sum2=0;

        for(int i=0; i<n; i++) {
            cin >> a >> b;
            
            sum1+=a;
            sum2+= b;
        }

        cout<< max(sum1, sum2) * min(green, purple) + min(sum1, sum2) * max(green, purple) << endl;

    }
     
    return 0;
}



