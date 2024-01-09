#include<bits/stdc++.h>
using namespace std;

// TC : O(V + E)
// SC : O(V)

const int mx = 1000;
bool visited[mx];
int adj_mat[mx][mx];
int node;

void DFS(int src_node)
{
    cout << src_node <<" ";
    visited[src_node] = true;

    for(int i = 0; i < node; i++)
    {
        if(adj_mat[src_node][i] == 1)
        {
            if(visited[i] == false)
            {
                DFS(i);
            }
        }
    }
}

int main()
{
    cin >> node;

    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < node; j++)
        {
            cin >> adj_mat[i][j];
        }
    }

    // Node start from 0
    int source = 0;
    DFS(source);
}
