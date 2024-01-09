#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n^2)
// Memory '' : O(1)

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 1; i < n; i++)
    {
        int idx = i;

        while(idx > 0 && v[idx] < v[idx-1])
        {
            swap(v[idx], v[idx-1]);
            idx--;
        }
    }

    for(auto it : v)
        cout << it << " ";
    cout << "\n";
}
