#include<bits/stdc++.h>
using namespace std;

// Its not exact BFS, BFS slide modify version

const int mx = 1e6;
vector<int> adj_list[mx];
int dependent[mx];
vector<int> ans;
int n, m;

void BFS()
{
    for(int i = 1; i <= n; i++)
    {
        for(auto adj_node : adj_list[i])
            dependent[adj_node]++;
    }

    queue<int> q;

    for(int i = 1; i <= n; i++)
    {
        if(dependent[i] == 0)
            q.push(i);
    }

    while(q.size())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto adj_node : adj_list[node])
        {
            dependent[adj_node]--;

            if(dependent[adj_node] == 0)
                q.push(adj_node);
        }
    }
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

    BFS();

    if(ans.size() == n)
    {
        for(auto it : ans)
            cout << it << " ";
        cout << "\n";
    }

    else
        cout << "IMPOSSIBLE\n";
}
