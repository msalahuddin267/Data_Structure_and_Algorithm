#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TC : O(V^3)
// SC : O(V^2)
// All pair shortest path find

const ll inf = 1e18;
const int mx = 1e3 + 5;
ll dist[mx][mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = inf;
        }
    }

    for(int i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
    }

    for(int k = 1; k <= n; k++)
    {
        for(int u = 1; u <= n; u++)
        {
            for(int v = 1; v <= n; v++)
            {
                dist[u][v] = min(dist[u][v], dist[u][k] + dist[k][v]);
            }
        }
    }

    while(q--)
    {
        int a, b;
        cin >> a >> b;

        if(dist[a][b] == inf)
            cout << -1 << "\n";
        else
            cout << dist[a][b] << "\n";
    }
}
