#include<bits/stdc++.h>
using namespace std;

/*
--> Set e element gula sorted akare thake r kono duplicate element thake na. orthat set er sob element unique hoi
--> Set back-end implementation in BST (Binary Search Tree)
--> Maximum operation done in O(log n) time of average case and worst case O(n)

Not Supporting Function in Set :
--> reverse
--> does not have random access


*/

int main()
{
    // Ascending order
    set<int> s;

    // Descending order
    set<int, greater<int>> ss;

    // With element
    set<int> sss = {1,2,3};

    // Insert element - O(log n)
    s.insert(5);
    s.insert(10);
    s.insert(7);
    s.insert(8);
    s.insert(10);
    s.insert(15);

    // multiple element insert at a time
    s.insert({1,2,5});

    // Delete element use value - O(log n)
    s.erase(5);
    s.erase(10);

    // Delete element use index 0 base - O(log n)
    auto a = s.begin();
    advance(a, 2);
    s.erase(a);

    // Delete element range use iterator - O(n) (l iterator theke r iterator er ager iterator porjonto delete korbe)
    auto l = s.lower_bound(5);
    auto r = s.lower_bound(10);
    s.erase(l, r);

    // Show Set current Size - O(1)
    int sz = s.size();
    cout << sz << "\n";

    // Show Set total size (mane set e maximum koto gula element rakha jabe)
    int mx_sz = s.max_size();
    cout << mx_sz << "\n";

    // Check Set empty or not - O(1)
    if(s.empty()) cout << "Set is Empty\n";
    else cout << "Set is not Empty\n";

    // Find specific element in Set - O(log n)
    auto b = s.find(17);
    if (b != s.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(log n) (set e tho akta element akbar e thakbe tai jodi element ta present thake tahole 1 return korbe r na thakle 0)
    int c = s.count(15);

    // Last element access in Set - O(log n)
    cout << *s.rbegin() << "\n";

    // Last element delete in Set - O(log n)
    int x = *s.rbegin();
    s.erase(x);

    // Last element delete in Sset - O(log n)
    auto itt = s.end();
    itt--;
    s.erase(itt);

    // lower bound - O(log n)
    auto lb = s.lower_bound(2);
    if(lb != s.end())
        cout << *lb << "\n";

    // upper bound - O(log n)
    auto ub = s.upper_bound(2);
    if(ub != s.end())
        cout << *ub << "\n";

    // Show Set all element - O(n)
    for(auto it : s)
        cout << it << " ";
    cout << "\n";

    // Delete all element - O(n)
    s.clear();

    // Swap two Set - O(1) exchange element, that is s1 er element s2 te jabe r s2 er element s1 e asbe
    set<int>s1, s2;
    s1.swap(s2);
}
