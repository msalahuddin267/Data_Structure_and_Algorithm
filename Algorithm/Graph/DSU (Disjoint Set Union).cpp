#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5;
vector<int> parent(mx, -1);
vector<int> par_level(mx, 0);
vector<int> par_size(mx, 1);

// Without Path Compression
int dsu_find2(int n)
{
    if(parent[n] == -1)
        return n;

    return dsu_find2(parent[n]);
}

// Use Path Compression
int dsu_find(int n)
{
    if(parent[n] == -1)
        return n;

    int leader = dsu_find(parent[n]);
    parent[n] = leader;

    return leader;
}

// Naive approach
void dsu_union(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);

    if(leader_a != leader_b)
        parent[leader_a] = leader_b;

    else
        cout << "Cycle Find\n";
}

// Union by Rank
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

// Union by Size
void dsu_union_size(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);

    if(leader_a != leader_b)
    {
        if(par_size[leader_a] > par_size[leader_b])
        {
            parent[leader_b] = leader_a;
            par_size[leader_a] += par_size[leader_b];
        }

        else
        {
            parent[leader_a] = leader_b;
            par_size[leader_b] += par_size[leader_a];
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    while(m--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union_rank(a, b);
    }
}
