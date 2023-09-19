#include<bits/stdc++.h>
using namespace std;

/*
--> Multiset e element gula sorted akare thake r duplicate element o allow kore
--> Multiset back-end implementation in BST (Binary Search Tree)
--> Maximum operation done in O(log n) time of average case and worst case O(n)
--> Set e je je operation kora jai multiset eo same operation e kora jai difference sudhu multiset duplicate allow kore r set kore na

Not Supporting Function in Multiset :
--> reverse
--> does not have random access


*/

int main()
{
    // Ascending order
    multiset<int> ms;

    // Descending order
    multiset<int, greater<int>> mss;

    // With element
    multiset<int> sss = {1,2,3,3,5};

    // Insert element - O(log n)
    ms.insert(5);
    ms.insert(10);
    ms.insert(7);
    ms.insert(8);
    ms.insert(10);
    ms.insert(15);

    // multiple element insert at a time
    ms.insert({1,2,5});

    // Delete element all occurrence - O(log n) (jotogula 5 thakbe sob delete kore dibe)
    ms.erase(5);

    // Delete element fist occurrence - O(log n) (sudhu matro first 3 ta delete kore dibe)
    if(ms.find(3) != ms.end())
    ms.erase(ms.find(3));

    // Delete element use index 0 base - O(log n)
    auto a = ms.begin();
    advance(a, 2);
    ms.erase(a);

    // Delete element range use iterator - O(n) (l iterator theke r iterator er ager iterator porjonto delete korbe)
    auto l = ms.lower_bound(5);
    auto r = ms.lower_bound(10);
    ms.erase(l, r);

    // Show Multiset current Size - O(1)
    int sz = ms.size();
    cout << sz << "\n";

    // Show Multiset total size (mane Multiset e maximum koto gula element rakha jabe)
    int mx_sz = ms.max_size();
    cout << mx_sz << "\n";

    // Check Multiset empty or not - O(1)
    if(ms.empty()) cout << "Multiset is Empty\n";
    else cout << "Multiset is not Empty\n";

    // Find specific element in Multiset - O(log n)
    auto b = ms.find(17);
    if (b != ms.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(log n) (Multiset e element ta koto bar ache seta janar jonno)
    int c = ms.count(15);

    // Last element access in Multiset - O(log n)
    cout << *ms.rbegin() << "\n";

    // Last element delete in Multiset - O(log n)
    auto itt = ms.end();
    itt--;
    ms.erase(itt);

    // lower bound - O(log n) (jodi 2 ekadhik thake tahole leftmost 2 er iterator return korbe)
    auto lb = ms.lower_bound(2);
    if(lb != ms.end())
        cout << *lb << "\n";

    // upper bound - O(log n)
    auto ub = ms.upper_bound(2);
    if(ub != ms.end())
        cout << *ub << "\n";

    // Show Multiset all element - O(n)
    for(auto it : ms)
        cout << it << " ";
    cout << "\n";

    // Delete all element - O(n)
    ms.clear();

    // Swap two Multiset - O(1) exchange element, that is ms1 er element ms2 te jabe r ms2 er element ms1 e asbe
    multiset<int>ms1, ms2;
    ms1.swap(ms2);
}
