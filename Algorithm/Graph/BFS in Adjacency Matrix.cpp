#include<bits/stdc++.h>
using namespace std;

// TC : O(V + E)
// SC : O(V)

const int mx = 1000;
bool visited[mx];
int adj_mat[mx][mx];
int node;

void BFS(int src_node)
{
    queue<int> q;
    q.push(src_node);
    visited[src_node] = true;

    while(q.size())
    {
        int head = q.front();
        q.pop();
        cout<< head <<" ";

        for(int i = 0; i < node; i++)
        {
            if(adj_mat[head][i] == 1)
            {
                if(visited[i] == false)
                {
                    q.push(i);
                    visited[i] = true;
                }
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
    BFS(source);
}

