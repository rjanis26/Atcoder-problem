#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mx 100001

vector<int> v[mx];
int vis[mx], dis[mx];

void dfs(int node, int d) {
    vis[node] = 1;
    dis[node] = d;

    for(int child : v[node]) {
        if(vis[child] == 0) 
            dfs(child, d+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int node, edge;
    cin>>node;
    edge = node-1;

    while(edge--) {
        int a, b; cin>> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1, 0) ;
    int q; cin >> q;
    int ans = -1;
    int mn = INT_MAX;
    while(q--) {
        int x; cin>> x;
        if(dis[x] <mn) {
            mn = dis[x];
            ans =x;
        }
        else if(dis[x] == mn) 
            ans = min(ans, x);
    }

    cout << ans << endl;
 
    return 0;
}