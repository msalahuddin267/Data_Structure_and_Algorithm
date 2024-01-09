#include<bits/stdc++.h>
using namespace std;

/*
--> Lower Bound hocche akta (sorted hote hobe na hole time complexity O(n) hoya jabe) array te amra jei value ta
    khujbo oitar leftmost itterator ta dibe r jodi oi value ta na thake tahole thik tar theke boro value ta dibe
    r jodi oitar theke boro value o na tkake tahole end() pointer return korbe
--> Upper bound hocche amra jei value ta dibo thik tar theke boro value ta dibe r jodi na thake tahole end()
    pointer return korbe
--> akta array te akta element koibar ache seta ber korte hole = upper bound - lower bound

--> Lower & Upper Bound duitai O(log n) e kaj kore but condition is container ta ke sorted order e thakte hobe sorted na hole complexity O(n) hoya jabe

Supporting Container :
--> Vector, set, multiset, map, multimap

Not Supporting Container :
--> unordered set, unordered multiset, unordered map, unordered multimap

*/

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int x = 5;
    int index_lower = -1, index_upper = -1;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    auto lower = lower_bound(v.begin(), v.end(), x);

    if(lower != v.end())
        index_lower = lower - v.begin();

    cout << index_lower << "\n";



    auto upper = upper_bound(v.begin(), v.end(), x);

    if(upper != v.end())
        index_upper = upper - v.begin();

    cout << index_upper << "\n";


    // x koibar ase ber korte hole
    int how_occur = upper - lower;
    cout << how_occur << "\n";
}
