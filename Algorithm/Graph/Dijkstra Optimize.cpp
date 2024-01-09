#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TC : O(V log V + E)
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

    dist[1] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, 1}); // Starting with node 1 with 0 weight

    while(pq.size())
    {
        int node = pq.top().second;
        pq.pop();

        if(vis[node]) continue;
        vis[node] = true;

        for(auto it : adj_list[node])
        {
            int adj_node = it.first;
            int cost = it.second;

            if(dist[node] + cost < dist[adj_node])
            {
                dist[adj_node] = dist[node] + cost;
                pq.push({dist[adj_node], adj_node});
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
