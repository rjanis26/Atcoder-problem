/*   #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mx 100001

vector<int> v[mx];
int vis[mx];

void dfs(int node) {
    vis[node] = 1;
    for(auto child : v[node]) {
        if(vis[child] == 0) 
            dfs(child);
    }   
}

int component_count(int node) {
    int count = 0;
        for(int i=1; i<=node;i++) {
        if(vis[i] == 0) {
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

    int ans = component_count(node);
    cout<< ans << endl;


    return 0;
}
   */

  /* 
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
  */
/* 
 #include<bits/stdc++/* .h>
 using namespace std;
#define endl '\n'

 vector<int> v[100];

int main() 
{
    int node, edge;
    cin>> node >> edge;
    while(edge--) {
        int x, y; cin>> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1; i<=node; i++) {

        cout<< i;
        for(int j=0; j<v[i].size(); j++)
            cout<< "-> " << v[i][j];
        cout<< endl;
    }


} */  
 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
#define mx 100001

vector<int>v[mx];

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

    for(int i=1; i<=node; i++)  {
        cout<<i;

        for(int j=0; j<v[i].size(); j++) 
            cout<<"-> " << v[i][j];
        
        cout<< endl;
    }

 
    return 0;

}