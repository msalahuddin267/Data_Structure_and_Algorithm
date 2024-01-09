#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, ans = 0;
        cin >> n;

        char a[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        for(int i = 0; i < n/2; i++)
        {
            for(int j = 0; j < n/2; j++)
            {
                vector<int> v;

                v.push_back(a[i][j] - 'a');
                v.push_back(a[n-i-1][n-j-1] - 'a');
                v.push_back(a[j][n-i-1] - 'a');
                v.push_back(a[n-j-1][i] - 'a');

                sort(v.begin(), v.end());

                for(int k = 0; k < 3; k++)
                    ans += v[3] - v[k];
            }
        }

        cout << ans << "\n";
    }
}
