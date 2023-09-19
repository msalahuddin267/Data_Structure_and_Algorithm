#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    bool ans = false;
    int low = 0, high = n - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(v[mid] == x)
        {
            ans = true;
            break;
        }

        else if(v[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}
