#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TC : O(V * E)
// SC : O(V)

const int mx = 5005;
const ll inf = 1e18;
vector<pair<int, int>> adj_list[mx];
int parent[mx];
ll dist[mx];
int cycle_node;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        // For Directed Weighted graph
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    for(int i = 1; i <= n; i++)
        dist[i] = inf;

    dist[1] = 0;
    bool flag = false;

    // Source node to other node distance find
    for(int i = 1; i <= n; i++)
    {
        for(int node = 1; node <= n; node++)
        {
            for(auto it : adj_list[node])
            {
                int adj_node = it.first;
                int cost = it.second;

                if(dist[node] + cost < dist[adj_node])
                {
                    dist[adj_node] = dist[node] + cost;
                    parent[adj_node] = node;

                    // Detect Cycle
                    if(i == n)
                    {
                        flag = true;
                        cycle_node = adj_node;
                    }
                }
            }
        }
    }

    if(flag)
    {
        cout << "YES\n";

        // If graph has cycle then print the cycle path
        int start = cycle_node;
        for(int i = 1; i < n; i++)
            start = parent[start];

        int temp = start;
        vector<int> ans;
        while(1)
        {
            ans.push_back(temp);
            temp = parent[temp];

            if(temp == start)
            {
                ans.push_back(temp);
                break;
            }
        }
        reverse(ans.begin(), ans.end());

        for(auto it : ans)
            cout << it << " ";
        cout << "\n";
    }

    else
        cout << "NO\n";
}
