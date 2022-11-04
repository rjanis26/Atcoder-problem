/*  #include<bits/stdc++.h>
 using namespace std;


 int main()
 {
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    int total = 0;
    while(test--) {
        int n,c; cin>>n >>c;
        int arr[n];

        for(int i=0; i<n; i++) 
            cin >> arr[i];
        
        for(int i=0; i<n; i++) {
            total += arr[i]*2;
        } 
        if(c-total >= 0) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
         
    }
 

    return 0;
 } */


 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int array[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>array[i];
            sum+=array[i]*2;
        }
        if(c-sum>=0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}