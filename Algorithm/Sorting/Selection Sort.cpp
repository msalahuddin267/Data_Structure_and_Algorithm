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

    for(int i = 0; i < n; i++)
    {
        int min_idx = i;

        for(int j = i+1; j < n; j++)
        {
            if(v[min_idx] > v[j])
                min_idx = j;
        }

        swap(v[i], v[min_idx]);
    }

    for(auto it : v)
        cout << it << " ";
    cout << "\n";
}
