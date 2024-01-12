#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(E log E)
// Space "" : O(V + E)

// DSU by Rank
const int mx = 1e5 + 5;
vector<int> parent(mx, -1);
vector<int> par_level(mx, 0);

int dsu_find(int n)
{
    if(parent[n] == -1)
        return n;

    int leader = dsu_find(parent[n]);
    parent[n] = leader;

    return leader;
}

void dsu_union_rank(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);

    if(leader_a != leader_b)
    {
        if(par_level[leader_a] > par_level[leader_b])
            parent[leader_b] = leader_a;

        else if(par_level[leader_b] > par_level[leader_a])
            parent[leader_a] = leader_b;

        else
        {
            parent[leader_b] = leader_a;
            par_level[leader_a]++;
        }
    }
}

// Kruskal's Algorithm
class Edge
{
public:
    int u, v, w;

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<Edge> edge_list;
    int total_cost = 0;

    while(m--)
    {
        int u, v, w;
        cin >> u >> v >> w;

        Edge eg(u, v, w);
        edge_list.push_back(eg);
    }

    sort(edge_list.begin(), edge_list.end(), cmp);

    for(auto edge : edge_list)
    {
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;

        int leader_u = dsu_find(u);
        int leader_v = dsu_find(v);

        if(leader_u != leader_v)
        {
            dsu_union_rank(u, v);
            total_cost += w;
        }
    }

    cout << total_cost << "\n";
}
