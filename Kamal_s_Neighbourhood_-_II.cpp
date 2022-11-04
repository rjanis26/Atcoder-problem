
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int


typedef pair<int, int> edgeWeightPair;


class graph

{

    int V;

    list<edgeWeightPair> *adj;


public:

    graph(int V)

    {

         this->V = V;

         adj = new list<edgeWeightPair>[V];

    }

    void addEdge(int u, int v)

    {

         adj[u].push_back(make_pair(u, v));

    }

    void check(int k, int n)

    {

         vector<bool> visited(V, false);

         queue<int> q;

         visited[k] = true;

         q.push(k);

         int count = 0;

         while (!q.empty())

         {

              int u = q.front();

              q.pop();

              for (auto element : adj[u])

              {

                   int v = element.second;

                   if (visited[v] != true)

                   {

                        visited[v] = true;

                        q.push(v);

                        count++;

                   }

              }

         }

         cout << count << endl;

    }

};


int main()

{
     ios_base :: sync_with_stdio(false);
     cin.tie(0); cout.tie(0);


    int n, e;

    cin >> n >> e;

    graph g(n);

    for (int i = 0; i < e; i++)

    {

         int u, v;

         cin >> u >> v;

         g.addEdge(u, v);

    }

    int k;

    cin >> k;

    g.check(k, n);

}