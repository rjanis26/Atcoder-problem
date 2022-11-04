#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define mx 10000

vector<int> v[10000];
int vis[1003];

void dfs(int node) {
    vis[node]=1;
    cout << node << " -> ";
    for(int i=0; i<v[node].size(); i++) {
        int child = v[node][i];
        if(vis[child] == 0) {
            dfs(child);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0); 

    int node, edge;
    cin>> node >> edge;

    while(edge--) {
        int x, y;
        cin>> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);


    return 0;
}