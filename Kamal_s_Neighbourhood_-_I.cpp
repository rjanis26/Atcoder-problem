#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
     int N, E;
     cin >> N >> E;
     vector<vector<int>

            >
         adj(N, vector<int>());
     for (int i = 0; i < E; i++)
     {
          int u, v;
          cin >> u >> v;
          adj[u].push_back(v);
          adj[v].push_back(u);
     }
     int K;
     cin >> K;
     cout << adj[K].size() << endl;
     return 0;
}