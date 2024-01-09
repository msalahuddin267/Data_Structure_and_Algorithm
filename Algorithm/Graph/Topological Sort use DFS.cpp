#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6;
vector<int> adj_list[mx];
int vis[mx];
stack<int> ans;
int n, m;

bool DFS(int src)
{
    vis[src] = 1;

    for(auto adj_node : adj_list[src])
    {
        if(vis[adj_node] == 0)
        {
            if(DFS(adj_node))
                return true;
        }
        else if(vis[adj_node] == 1)
            return true;
    }

    ans.push(src);
    vis[src] = 2;

    return false;
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            if(DFS(i))
            {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    while(ans.size())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << "\n";
}
