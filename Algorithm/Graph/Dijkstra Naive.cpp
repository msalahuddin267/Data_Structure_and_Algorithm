#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TC : O(V * E)
// SC : O(V)

const int mx = 1e6;
const ll inf = 1e18;
vector<pair<int, int>> adj_list[mx];
bool vis[mx];
ll dist[mx];
int n, m;

void Dijkstra()
{
    for(int i = 1; i <= n; i++)
        dist[i] = inf;

    // Starting with node 1 with 0 weight
    dist[1] = 0;

    for(int i = 0; i < n; i++)
    {
        int selected_node = -1;
        for(int j = 1; j <= n; j++)
        {
            if(vis[j]) continue;

            if(selected_node == -1 || dist[selected_node] > dist[j])
                selected_node = j;
        }

        vis[selected_node] = true;

        for(auto adj_node : adj_list[selected_node])
        {
            int node = adj_node.first;
            int cost = adj_node.second;

            if(dist[selected_node] + cost < dist[node])
            {
                dist[node] = dist[selected_node] + cost;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    Dijkstra();

    for(int i = 1; i <= n; i++)
        cout << dist[i] << " ";
    cout << "\n";
}
