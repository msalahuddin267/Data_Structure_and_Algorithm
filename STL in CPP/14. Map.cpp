#include<bits/stdc++.h>
using namespace std;

/*
--> Map e value gula pair akare thake, first pair ke bole key r second pair ke bole value. orthat map holo (key, value) er pair
--> Map e key gula unique hoi, key index er moton use hoi, key kokhon o duplicate hoi na, r key gula sorted akare thake
--> Map e key er under e value rakha hoi, key er upor base korei maximum operation hoi (jamon vector e index er upor base kore sob kora hoi map eo serokom key er upor base kore kora hoi)
--> Map back-end implementation in BST (Binary Search Tree)
--> Maximum operation done in O(log n) time of average case and worst case O(n)
--> Map e kono iterator er value access korte hole obossoi evabe bracket diye (*it).first, (*it).second korte hoi

Not Supporting Function in Map :
--> reverse


*/

int main()
{
    // Ascending order or normal use
    map<int, int> mp;

    // Descending order
    map<int, int, greater<int>> mpp;

    // With element
    map<int, int> mppp = {{5, 25}, {6, 30}, {7, 35}};

    // Insert element - O(log n)
    mp[1] = 5; // key = 1 and value = 5
    mp[2] = 10;
    mp[3] = 15;
    mp[4] = 15;

    // Different way of Insert - O(log n)
    mp.insert({8, 40});

    // multiple element insert at a time complexity depend on element
    mp.insert({{9, 45}, {10, 50}});

    // Delete element  - O(log n) (map e kono element delete korte hole key dhore delete korte hoi)
    mp.erase(6);
    mp.erase(8);

    // Delete element use index 0 base - O(log n)
    auto a = mp.begin();
    advance(a, 2);
    mp.erase(a);

    // Delete element range use iterator - O(n) (l iterator theke r iterator er ager iterator porjonto delete korbe)
    auto l = mp.lower_bound(5);
    auto r = mp.lower_bound(8);
    mp.erase(l, r);

    // Show Map current Size - O(1)
    int sz = mp.size();
    cout << sz << "\n";

    // Show Map total size - O(1) (mane Map e maximum koto gula element rakha jabe)
    int mx_sz = mp.max_size();
    cout << mx_sz << "\n";

    // Check Map empty or not - O(1)
    if(mp.empty()) cout << "Map is Empty\n";
    else cout << "Map is not Empty\n";

    // Find specific element in Map - O(log n)
    auto b = mp.find(7);
    if (b != mp.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Find specific element in Map another way- O(log n)
    if(mp[10])
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(log n) (Map e tho akta key akbar e thakbe tai jodi element ta present thake tahole 1 return korbe r na thakle 0)
    int c = mp.count(10);

    // Last element access in Map - O(log n)
    auto it = mp.rbegin();
    cout << (*it).first << " " << (*it).second << "\n";

    // Last element delete in Map use key - O(log n)
    mp.erase((*it).first);

    // Last element access in Map another way - O(log n)
    auto itt = mp.end();
    itt--;
    cout << (*itt).first << " " << (*itt).second << "\n";

    // Last element delete in Map use iterator - O(log n)
    mp.erase(itt);

    // lower bound - O(log n)
    auto lb = mp.lower_bound(2);
    if(lb != mp.end())
        cout << (*lb).first << " " << (*lb).second << "\n";

    // upper bound - O(log n)
    auto ub = mp.upper_bound(2);
    if(ub != mp.end())
        cout << (*ub).first << " " << (*ub).second << "\n";

    // Show Map all element - O(n)
    for(auto it : mp)
        cout << it.first << " " << it.second << "\n";
    cout << "\n";

    // Show Map all element - O(n) another way
    for(auto [a, b] : mp)
        cout << a << " " << b << "\n";
    cout << "\n";

    // Delete all element - O(n)
    mp.clear();

    // Swap two Map - O(1) exchange element, that is mp1 er element mp2 te jabe r mp2 er element mp1 e asbe
    map<int, int>mp1, mp2;
    mp1.swap(mp2);
}
