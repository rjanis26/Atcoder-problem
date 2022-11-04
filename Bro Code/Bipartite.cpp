#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define endl '\n'
#define mx 100001

vector<int> v[mx];
int vis[mx], col[mx];

bool dfs(int node, int colr) {
    vis[node] = 1;
    col[node] = colr;
    for(int child : v[node]) {
        if(vis[child] == 0) {
            if(dfs(child, colr^1) == false) 
                return false;
        }
        else {
            if(col[node] == col[child]) 
                return false;
        }
    }
    return true;
        
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int node, edge;
    cin>> node >> edge;

    while(edge--) {
        int x, y; cin>> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }    

    bool ans = dfs(1,1);
    if(ans == true) cout<< "Graph is Bipartite" << endl;
    else cout<< "Not Bipartite" << endl;


    return 0;
 
}
 