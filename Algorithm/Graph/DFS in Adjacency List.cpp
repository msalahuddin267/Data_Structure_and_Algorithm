#include<bits/stdc++.h>
using namespace std;

// TC : O(V + E)
// SC : O(V)

const int mx = 1000;
bool visited[mx];
vector<int> adj_list[mx];

void DFS(int src_node)
{
    cout << src_node << " ";
    visited[src_node] = true;

        for(auto adj_node : adj_list[src_node])
        {
            if(visited[adj_node] == false)
            {
                DFS(adj_node);
            }
        }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    for(int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // Node start from 0
    int source = 0;
    DFS(source);
}
