#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define mx 10000

vector<int> v[mx];

int  main()
{
    int node, edge;
    cin>> node >> edge;

    int x, y;
    while(edge--) {
        cin>> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }    

    for(int i=1; i<=node; i++) {
        cout << i;
        for(int j=0; j<v[i].size(); j++) {
            cout << "-> "<<v[i][j];
        }
        cout<< endl;
    }

    return 0;
   
}