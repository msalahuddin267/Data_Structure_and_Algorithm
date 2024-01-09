#include<bits/stdc++.h>
using namespace std;

// Its called recursive sorting algorithm or divide & conquer algorithm
// Time Complexity : depend for choose pivot. Best case O(n log n) & worst case O(n^2)
// Memory '' : O(log n)

vector<int> quick_sort(vector<int> v)
{
    if(v.size() <= 1)
        return v;

    int pivot = v.size() - 1;
    // int pivot = rand() % v.size(); // use random pivot selection
    vector<int> first, last;

    for(int i = 0; i < v.size(); i++)
    {
        if(i == pivot)
            continue;

        else if(v[i] < v[pivot])
            first.push_back(v[i]);

        else
            last.push_back(v[i]);
    }

    vector<int> sorted_first = quick_sort(first);
    vector<int> sorted_last = quick_sort(last);
    vector<int> sorted_v;

    for(int i = 0; i < sorted_first.size(); i++)
        sorted_v.push_back(sorted_first[i]);

    sorted_v.push_back(v[pivot]);

    for(int i = 0; i < sorted_last.size(); i++)
        sorted_v.push_back(sorted_last[i]);

    return sorted_v;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n), ans;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    ans = quick_sort(v);

    for(auto it : ans)
        cout << it << " ";
    cout << "\n";
}
