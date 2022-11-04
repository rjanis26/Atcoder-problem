   #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    int odd=0, even=0;

    for(int i=0; i<n; i++) {
        if(arr[i] %2==0) 
            even++;
        else 
            odd++;
    }

    if(even > odd)  
        cout<< "READY FOR BATTLE" << endl;
    else 
        cout<< "NOT READY" << endl;
       
     
    return 0;
}
  
/* 
#include <iostream>
using namespace std;

int main() {
	// your code goes here

	    int n;
	    cin>>n;
	    int a[n],even=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]%2==0)
	        even++;
	       
	
	    }
	    n-=even;
	     if(even>n){
	    cout<<"READY FOR BATTLE\n";
	  
	    }
	    else{
	    cout<<"NOT READY\n";
	   
	    }
	
	return 0;
}
 */