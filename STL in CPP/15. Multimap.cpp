#include<bits/stdc++.h>
using namespace std;

/*
--> Map r Multimap er main difference holo map e key gula unique hoi kintu multimap e duplicate key thakte pare
--> Multimap e key gula sorted akarei thake but key jehetu duplicate hoi tai index er moton use kora jai na
--> Multimap back-end implementation in BST (Binary Search Tree)
--> Maximum operation done in O(log n) time of average case and worst case O(n)
--> Multimap e kono iterator er value access korte hole obossoi evabe bracket diye (*it).first, (*it).second korte hoi

Not Supporting Function in Multimap :
--> Map er moto mp[key] ei vabe sorasori use kora jai na
--> reverse
--> does not have random access


*/

int main()
{
    // Ascending order or normal use
    multimap<int, int> mp;

    // Descending order
    multimap<int, int, greater<int>> mpp;

    // With element
    multimap<int, int> mppp = {{5, 25}, {8, 30}, {2, 35}};

    // Insert element - O(log n)
    mp.insert({4, 40}); // key = 4 and value = 40
    mp.insert({8, 10});
    mp.insert({12, 60});
    mp.insert({8, 50});
    mp.insert({12, 40});
    mp.insert({8, 30});

    // multiple element insert at a time complexity depend on element
    mp.insert({{9, 45}, {10, 50}});

    // Delete all occurrence key element  - O(log n) (Multimap e joto gula key 6, 8 pabe sob delete kore dibe)
    mp.erase(6);
    mp.erase(8);

    // Delete single key element - O(log n)
    auto x = mp.find(4);
    mp.erase(x);

    // Delete element use index 0 base - O(log n)
    auto a = mp.begin();
    advance(a, 2);
    mp.erase(a);

    // Delete element range use iterator - O(n) (l iterator theke r iterator er ager iterator porjonto delete korbe)
    auto l = mp.lower_bound(5);
    auto r = mp.lower_bound(8);
    mp.erase(l, r);

    // Show Multimap current Size - O(1)
    int sz = mp.size();
    cout << sz << "\n";

    // Show Multimap total size - O(1) (mane Multimap e maximum koto gula element rakha jabe)
    int mx_sz = mp.max_size();
    cout << mx_sz << "\n";

    // Check Multimap empty or not - O(1)
    if(mp.empty()) cout << "Multimap is Empty\n";
    else cout << "Multimap is not Empty\n";

    // Find specific element in Multimap - O(log n)
    if (mp.find(7) != mp.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(log n) (10 koibar ache seta count kore dibe)
    int c = mp.count(10);

    // Last element access in Multimap - O(log n)
    auto it = mp.rbegin();
    cout << (*it).first << " " << (*it).second << "\n";

    // Last element access in Multimap another way - O(log n)
    auto itt = mp.end();
    itt--;
    cout << (*itt).first << " " << (*itt).second << "\n";

    // Last element delete in Multimap use iterator - O(log n)
    mp.erase(itt);

    // lower bound - O(log n)
    auto lb = mp.lower_bound(2);
    if(lb != mp.end())
        cout << (*lb).first << " " << (*lb).second << "\n";

    // upper bound - O(log n)
    auto ub = mp.upper_bound(2);
    if(ub != mp.end())
        cout << (*ub).first << " " << (*ub).second << "\n";

    // Show Multimap all element - O(n)
    for(auto it : mp)
        cout << it.first << " " << it.second << "\n";
    cout << "\n";

    // Show Multimap all element - O(n) another way
    for(auto [a, b] : mp)
        cout << a << " " << b << "\n";
    cout << "\n";

    // Delete all element - O(n)
    mp.clear();

    // Swap two Multimap - O(1) exchange element, that is mp1 er element mp2 te jabe r mp2 er element mp1 e asbe
    multimap<int, int>mp1, mp2;
    mp1.swap(mp2);
}
