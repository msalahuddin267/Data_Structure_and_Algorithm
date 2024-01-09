#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space '' : O(n)

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    bool flag = false;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++)
    {
        if(v[i] == k)
        {
            flag = true;
            break;
        }
    }

    // Use Ternary Operator
    flag ? cout << "YES\n" : cout << "NO\n";
}
