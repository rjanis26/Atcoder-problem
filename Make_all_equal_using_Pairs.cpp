/* #include<bits/stdc++.h> 
using namespace std;
#define endl '\n'

void solve() {
   
	    int n;
	    cin>>n;
	    int a[n];
	   
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m=0;
	    for(int i=0;i<n;i++){
            int c = count(a,a+n,a[i]);
            //cout << "Max: " << c << " ";
            if(m<c){
                m=c;
            }
	    }
	    cout<<n-m<<endl;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        solve();
    }
 

    return 0;
} */




