#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6;

// TC : O(V + E)
// SC : O(V)

vector<int> adj_list[mx];
bool vis[mx];
int color[mx];

// Check Using BFS
bool BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    color[src] = 1;

    while(q.size())
    {
        int node = q.front();
        q.pop();

        for(auto adj_node : adj_list[node])
        {
            if(vis[adj_node] == false)
            {
                if(color[node] == 1)
                    color[adj_node] = 2;
                else
                    color[adj_node] = 1;

                q.push(adj_node);
                vis[adj_node] = true;
            }
            else
            {
                if(color[adj_node] == color[node])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

// Check Using DFS
bool DFS(int src)
{
    vis[src] = true;

    for(auto adj_node : adj_list[src])
    {
        if(vis[adj_node] == false)
        {
            if(color[src] == 1)
                color[adj_node] = 2;
            else
                color[adj_node] = 1;

            if(!DFS(adj_node))
                return false;
        }
        else
        {
            if(color[adj_node] == color[src])
                return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == false)
        {
            color[i] = 1;
            if(!DFS(i))
            {
                cout << "Not Bipartite\n";
                return 0;
            }
        }
    }

    cout << "Yes, Bipartite\n";
    for(int i = 1; i <= n; i++)
        cout << color[i] << " ";
    cout << "\n";
}
