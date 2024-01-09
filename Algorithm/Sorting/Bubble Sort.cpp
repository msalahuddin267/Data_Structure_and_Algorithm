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
        bool sorted = true;
        for(int j = 0; j < n-1-i; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
                sorted = false;
            }
        }
        if(sorted)
            break;
    }

    for(auto it : v)
        cout << it << " ";
    cout << "\n";
}
