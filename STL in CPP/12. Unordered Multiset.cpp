#include<bits/stdc++.h>
using namespace std;

/*
--> Unordered multiset e duplicate value thakbe and value gula unsorted thakbe r valuegula kintu serially o thake nah
    randomly thake but same value gula pashapashi thakbe (mane age jake insert kora hobe se age thakbe amon na, jekono random order e thakbe)
--> Unordered multiset r Multiset er main difference holo Multiset e value gula sorted thake r unordered multiset e sorted thake nah
--> Unordered multiset back-end implementation in Hashing
--> Maximum operation done in O(1) time of average case and worst case O(n)

Not Supporting Function in Unordered multiset:
--> reverse
--> does not have random access
--> Upper bound & lower bound
--> Last element access korar direct kono way nai because Hash table e value gula randomly thake but O(n) e kora jai


*/

int main()
{
    // Declaration
    unordered_multiset<int> ums;

    // With element
    unordered_multiset<int> umss = {1,2,3};

    // Insert element - O(1)
    ums.insert(5);
    ums.insert(10);
    ums.insert(7);
    ums.insert(8);
    ums.insert(10);
    ums.insert(15);

    // Delete element use value - O(1)
    ums.erase(5);
    ums.erase(10);

    // Delete element use index 0 base - O(n) - depend on advance value
    auto a = ums.begin();
    advance(a, 2);
    ums.erase(a);

    // Delete range element use- O(n) r kintu delete hobe nah, r er ager iterator porjonto delete korbe
    auto l = ums.begin();
    auto r = ums.end();
    ums.erase(l, r);

    // Show Unordered Multiset current Size - O(1)
    int sz = ums.size();
    cout << sz << "\n";

    // Show Unordered Multiset total size (mane Unordered multiset e maximum koto gula element rakha jabe)
    int mx_sz = ums.max_size();
    cout << mx_sz << "\n";

    // Check Unordered Multiset empty or not - O(1)
    if(ums.empty()) cout << "Unordered Multiset is Empty\n";
    else cout << "Unordered Multiset is not Empty\n";

    // Find specific element in Unordered Multiset - O(1)
    if (ums.find(17) != ums.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(1) (element ta koibar ache janar jonno)
    int c = ums.count(15);

    // Show Unordered Multiset all element - O(n)
    for(auto it : ums)
        cout << it << " ";
    cout << "\n";

    // O(1) - ei unordered multiset e Hash table e currently koto gula bucket make koreche seta janar jonno
    cout << ums.bucket_count() << "\n";

    // O(1) - Hash table e 4 element ta koto number bucket e ache jante caile
    cout << ums.bucket(4) << "\n";

    // O(1) - Hash table e 2 number bucket e koita value ache janar jonno
    cout << ums.bucket_size(2) << "\n";

    // Delete all element - O(n)
    ums.clear();

    // Swap two Unordered Multiset - O(1) exchange element, that is ums1 er element ums2 te jabe r ums2 er element ums1 e asbe
    unordered_set<int>ums1, ums2;
    ums1.swap(ums2);
}
