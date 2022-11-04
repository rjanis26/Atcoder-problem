#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"

 int arr[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, gift;  cin>> n;
   

    for(int i=1; i<=n; i++) {
         cin>> gift;
          arr[gift] = i;
    }
       

    for(int i=1; i<=n; i++) 
        cout<<arr[i] << " ";
    cout<< endl;
     
 
    return 0;
}