#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define mx 100001

vector<int> v[mx];
int vis[mx], dis[mx];

void dfs(int node, int d) {
    vis[node] = 1;
    dis[node]=d;

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
    cin>> node >> edge;

    while(edge--) {
        int a, b; cin>> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int x; cin>> x;
    dfs(x,0);

    
    for(int i=1; i<=node; i++) {
        cout<< x <<" -> " << i << " = " << dis[i] <<endl;
    }

 

    return 0;
}


/* 
                1
               /  \
               2   3
              /\   /\
             4   5 6  7


  */