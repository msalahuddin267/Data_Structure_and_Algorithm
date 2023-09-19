#include<bits/stdc++.h>
using namespace std;

/*
--> Unordered Multimap e key gula unique o hobe nah abr sorted o thakbe nah orthat
--> key gula duplicate thakte parbe and key gula unsorted thakbe abr key gula kintu serially o thake nah randomly thake
    but same value gula pashapashi thakbe (mane age jake insert kora hobe se age thakbe amon na, jekono random order e thakbe)
--> Unordered Multimap e key jehetu duplicate hoi tai index er moton use kora jai na
--> Unordered Multimap back-end implementation in Hashing
--> Maximum operation done in O(1) time of average case and worst case O(n)
--> Unordered Multimap e kono iterator er value access korte hole obossoi evabe bracket diye (*it).first, (*it).second korte hoi

Not Supporting Function in Unordered Multimap :
--> Map\Unordered map er moto mp[key] ei vabe sorasori use kora jai na
--> reverse
--> does not have random access
--> Upper bound & lower bound
--> Last element access korar direct kono way nai because Hash table e value gula randomly thake but O(n) e kora jai


*/

int main()
{
    // Declaration
    unordered_multimap<int, int> ummp;

    // With element
    unordered_multimap<int, int> ummpp = {{5, 25}, {8, 30}, {2, 35}};

    // Insert element - O(1)
    ummp.insert({4, 40}); // key = 4 and value = 40
    ummp.insert({8, 10});
    ummp.insert({12, 60});
    ummp.insert({8, 50});
    ummp.insert({12, 40});
    ummp.insert({8, 30});

    // multiple element insert at a time complexity depend on element
    ummp.insert({{9, 45}, {10, 50}});

    // Delete all occurrence key element  - O(1) (joto gula key 8 pabe sob delete kore dibe)
    ummp.erase(8);

    // Delete single key element - O(1)
    auto x = ummp.find(4);
    if(x != ummp.end())
        ummp.erase(x);

    // Delete element use index 0 base - complexity based on advance funtion
    auto a = ummp.begin();
    advance(a, 2);
    ummp.erase(a);

    // Show Unordered Multimap current Size - O(1)
    int sz = ummp.size();
    cout << sz << "\n";

    // Show Unordered Multimap total size - O(1) (mane Unordered Multimap e maximum koto gula element rakha jabe)
    long long mx_sz = ummp.max_size();
    cout << mx_sz << "\n";

    // Check Unordered Multimap empty or not - O(1)
    if(ummp.empty()) cout << "Unordered Multimap is Empty\n";
    else cout << "Unordered Multimap is not Empty\n";

    // Find specific element in Unordered Multimap - O(1)
    if (ummp.find(7) != ummp.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(1) (10 koibar ache seta count kore dibe)
    int c = ummp.count(10);

    // Last element access in Unordered Multimap use iterator - O(n)
    auto it = ummp.begin();
    advance(it, ummp.size() - 1);
    cout << (*it).first << " " << (*it).second << "\n";

    // Last element delete in Unordered Multimap use iterator - O(n)
    if (!ummp.empty())
    {
        auto lit = ummp.begin();
        advance(lit, ummp.size() - 1);
        ummp.erase(lit);
    }

    // Show Unordered Multimap all element - O(n)
    for(auto it : ummp)
        cout << it.first << " " << it.second << "\n";
    cout << "\n";

    // Show Unordered Multimap all element - O(n) another way
    for(auto [a, b] : ummp)
        cout << a << " " << b << "\n";
    cout << "\n";

    // O(1) - ei unordered multimap e Hash table e currently koto gula bucket make koreche seta janar jonno
    cout << ummp.bucket_count() << "\n";

    // O(1) - Hash table e 4 element ta koto number bucket e ache jante caile
    cout << ummp.bucket(4) << "\n";

    // O(1) - Hash table e 2 number bucket e koita value ache janar jonno
    cout << ummp.bucket_size(2) << "\n";

    // Delete element range use iterator - O(n) (l iterator theke r iterator er ager iterator porjonto delete korbe)
    auto l = ummp.begin();
    auto r = ummp.end();
    ummp.erase(l, r);

    // Delete all element - O(n)
    ummp.clear();

    // Swap two Unordered Multimap - O(1) exchange element, that is ummp1 er element ummp2 te jabe r ummp2 er element ummp1 e asbe
    unordered_multimap<int, int>ummp1, ummp2;
    ummp1.swap(ummp2);
}
