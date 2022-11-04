
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define mx 10000

vector<int> v[10000];
int vis[10000];

void dfs(int node) {
    vis[node]=1;
    for(auto child : v[node]) {
        if(vis[child]==0) 
            dfs(child);
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

    int count=0;
    for(int i=1; i<=node; i++) {
        if(vis[i] == 0) {
            count++;
            dfs(i);
        }
    }

    cout<< count << endl;

    return 0;
}


// Graph 
  

/* 
        1                   
        /\          
       2  3
          /\
         4  5  
 
         6
         |
         7

        8
        /\
        9 10 
        
        11
        /
       12
       /\
      15 3
        
        */


    /* 
    
    intput :

    node:10 edge: 7
    1 2 
    1 3
    3 4
    3 5
    6 7
    8 9 
    8 10
 
    
     */ 

    
  
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mx 100001

vector<int> v[mx];
int vis[mx];

void dfs(int node) {
    vis[node] =1 ;
    for(auto child : v[node]) {
        if(vis[child] == 0)
            dfs(child);
    }
}

int count_component(int node) {
    int count=0;
    for(int i=1; i<=node; i++) {
        if(vis[i]==0) {
            count++;
            dfs(i);
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int node, edge;
    cin>> node >> edge;

    while(edge--) {
        int x, y;
        cin>> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }


    int ans = count_component(node);
    cout<<"Total component: " << ans << endl;


    return 0;
}