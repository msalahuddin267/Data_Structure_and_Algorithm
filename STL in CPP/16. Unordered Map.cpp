#include<bits/stdc++.h>
using namespace std;

/*
--> Map r Unordered map er main difference holo map e key gula sorted thake but Unordered map e sorted thake nah
    abr serially o thake nah randomly thake (mane age jake insert kora hobe se age thakbe amon na, jekono random order e thakbe)
--> Unordered map e key gula unique hoi, key index er moton use hoi, key kokhon o duplicate hoi na
--> Unordered map e key er under e value rakha hoi, key er upor base korei maximum operation hoi (jamon vector e
    index er upor base kore sob kora hoi Unordered map eo serokom key er upor base kore kora hoi)
--> Unordered map back-end implementation in Hashing
--> Maximum operation done in O(1) time of average case and worst case O(n)
--> Unordered map e kono iterator er value access korte hole obossoi evabe bracket diye (*it).first, (*it).second korte hoi

Not Supporting Function in Unordered map :
--> reverse
--> Upper bound & lower bound
--> Last element access korar direct kono way nai because Hash table e value gula randomly thake but O(n) e kora jai


*/

int main()
{
    // Initialization
    unordered_map<int, int> um;

    // With element
    unordered_map<int, int> umm = {{5, 25}, {6, 30}, {7, 35}};

    // Insert element - O(1)
    um[1] = 5; // key = 1 and value = 5
    um[2] = 10;
    um[3] = 15;
    um[4] = 15;

    // Different way of Insert - O(1)
    um.insert({8, 40});

    // multiple element insert at a time complexity depend on element
    um.insert({{9, 45}, {10, 50}});

    // Delete element  - O(1) (Unordered map e kono element delete korte hole key dhore delete korte hoi)
    um.erase(6);
    um.erase(8);

    // Delete element use index 0 base - O(n) - depend on advance value
    auto a = um.begin();
    advance(a, 2);
    um.erase(a);

    // Show Unordered map current Size - O(1)
    int sz = um.size();
    cout << sz << "\n";

    // Show Unordered map total size - O(1) (mane Unordered map e maximum koto gula element rakha jabe)
    int mx_sz = um.max_size();
    cout << mx_sz << "\n";

    // Check Unordered map empty or not - O(1)
    if(um.empty()) cout << "Unordered map is Empty\n";
    else cout << "Unordered map is not Empty\n";

    // Find specific element in Unordered map - O(1)
    if (um.find(7) != um.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Find specific element in Unordered map another way- O(1)
    if(um[10])
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(1) (Unordered map e tho akta key akbar e thakbe tai jodi element ta present thake tahole 1 return korbe r na thakle 0)
    int c = um.count(10);

    // Last element access in Unordered map use iterator - O(n)
    auto it = um.begin();
    advance(it, um.size() - 1);
    cout << (*it).first << " " << (*it).second << "\n";

    // Last element delete in Unordered map use iterator - O(n)
    if (!um.empty())
    {
        auto lit = um.begin();
        advance(lit, um.size() - 1);
        um.erase(lit);
    }

    // Show Unordered map all element - O(n)
    for(auto it : um)
        cout << it.first << " " << it.second << "\n";
    cout << "\n";

    // Show Unordered map all element - O(n) another way
    for(auto [a, b] : um)
        cout << a << " " << b << "\n";
    cout << "\n";

    // O(1) - ei unordered map e Hash table e currently koto gula bucket make koreche seta janar jonno
    cout << um.bucket_count() << "\n";

    // O(1) - Hash table e 4 element ta koto number bucket e ache jante caile
    cout << um.bucket(4) << "\n";

    // O(1) - Hash table e 2 number bucket e koita value ache janar jonno
    cout << um.bucket_size(2) << "\n";

    // Delete all element - O(n)
    um.clear();

    // Swap two Unordered map - O(1) exchange element, that is um1 er element um2 te jabe r um2 er element um1 e asbe
    unordered_map<int, int>um1, um2;
    um1.swap(um2);
}
