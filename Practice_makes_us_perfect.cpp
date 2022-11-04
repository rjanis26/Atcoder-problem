#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int arr[4], count(0);
    for(int i=0; i<4; i++) {
        cin >> arr[i];

        if(arr[i] >= 10)    
            count++;
    } 

    cout << count << endl;
 

    return 0;
}