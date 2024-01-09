#include<bits/stdc++.h>
using namespace std;

// TC : O(V + E)
// SC : O(V)

const int mx = 1000;
bool visited[mx];
vector<int> adj_list[mx];

void BFS(int src_node)
{
    queue<int> q;
    q.push(src_node);
    visited[src_node] = true;

    while(q.size())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";

        for(auto adj_node : adj_list[head])
        {
            if(visited[adj_node] == false)
            {
                q.push(adj_node);
                visited[adj_node] = true;
            }
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
    BFS(source);
}
