#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> v[100001];
int vis[100001];

void dfs(int node) {
    vis[node] =1;
    for(auto child : v[node]) {
        if(vis[child] == 0) 
            dfs(child);
    }
}

int main() 
{   
    int node, edge;
    cin>> node >> edge;

    while(edge--) {
        int x, y; cin>> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
         
    }

    int count=0;
    for(int i=1; i<=node; i++)  {
        if(vis[i] ==0) {
            count++;
            dfs(i);
        }
    }

    cout<< count << endl;
    return 0;
}