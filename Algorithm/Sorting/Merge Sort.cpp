#include<bits/stdc++.h>
using namespace std;

// Its called recursive sorting algorithm or divide & conquer algorithm
// Time Complexity : O(n log n)
// Memory '' : O(n)

vector<int> merge_sort(vector<int> v)
{
    if(v.size() <= 1)
        return v;

    vector<int> b, c;
    int mid = v.size() / 2;

    for(int i = 0; i < mid; i++)
        b.push_back(v[i]);

    for(int i = mid; i < v.size(); i++)
        c.push_back(v[i]);

    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> sorted_v;
    int idx1 = 0, idx2 = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(idx1 == sorted_b.size())
        {
            sorted_v.push_back(sorted_c[idx2]);
            idx2++;
        }

        else if(idx2 == sorted_c.size())
        {
            sorted_v.push_back(sorted_b[idx1]);
            idx1++;
        }

        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_v.push_back(sorted_b[idx1]);
            idx1++;
        }

        else
        {
            sorted_v.push_back(sorted_c[idx2]);
            idx2++;
        }
    }

    return sorted_v;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n), ans;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    ans = merge_sort(v);

    for(auto it : ans)
        cout << it << " ";
    cout << "\n";
}
