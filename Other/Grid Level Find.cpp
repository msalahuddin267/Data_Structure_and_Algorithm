#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    char grid[n + 1][n + 1];

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> grid[i][j];
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(grid[i][j] == 'X') // X cell er level print korbe
                cout << min({i - 1 + 1, n - i + 1, j - 1 + 1, n - j + 1}) << "\n";
        }
    }
}
