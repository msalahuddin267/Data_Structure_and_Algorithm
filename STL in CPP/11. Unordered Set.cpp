#include<bits/stdc++.h>
using namespace std;

/*
--> Unordered set eo Set er moto kono duplicate value thake na, but unordered set e value gula set er moto sorted thake na
    abr serially o thake nah randomly thake (mane age jake insert kora hobe se age thakbe amon na, jekono random order e thakbe)
--> Unordered set r Set er main difference holo Set e value gula sorted thake r unordered set e sorted thake nah
--> Unordered set back-end implementation in Hashing
--> Maximum operation done in O(1) time of average case and worst case O(n)

Not Supporting Function in Unordered Set :
--> reverse
--> does not have random access
--> Upper bound & lower bound
--> Last element access korar direct kono way nai because Hash table e value gula randomly thake but O(n) e kora jai


*/

int main()
{
    // Declaration
    unordered_set<int> us;

    // With element
    unordered_set<int> uss = {1,2,3};

    // Insert element - O(1)
    us.insert(5);
    us.insert(10);
    us.insert(7);
    us.insert(8);
    us.insert(10);
    us.insert(15);

    // Delete element use value - O(1)
    us.erase(5);
    us.erase(10);

    // Delete element use index 0 base - O(n) - depend on advance value
    auto a = us.begin();
    advance(a, 2);
    us.erase(a);

    // Delete range element use- O(n) r kintu delete hobe nah, r er ager iterator porjonto delete korbe
    auto l = us.begin();
    auto r = us.end();
    us.erase(l, r);

    // Show Unordered Set current Size - O(1)
    int sz = us.size();
    cout << sz << "\n";

    // Show Unordered Set total size (mane Unordered set e maximum koto gula element rakha jabe)
    int mx_sz = us.max_size();
    cout << mx_sz << "\n";

    // Check Unordered Set empty or not - O(1)
    if(us.empty()) cout << "Unordered Set is Empty\n";
    else cout << "Unordered Set is not Empty\n";

    // Find specific element in Unordered Set - O(1)
    auto b = us.find(17);
    if (b != us.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Count element - O(1) (Unordered set e tho akta element akbar e thakbe tai jodi element ta present thake tahole 1 return korbe r na thakle 0)
    int c = us.count(15);

    // Show Unordered Set all element - O(n)
    for(auto it : us)
        cout << it << " ";
    cout << "\n";

    // O(1) - ei unordered set e Hash table e currently koto gula bucket make koreche seta janar jonno
    cout << us.bucket_count() << "\n";

    // O(1) - Hash table e 4 element ta koto number bucket e ache jante caile
    cout << us.bucket(4) << "\n";

    // O(1) - Hash table e 2 number bucket e koita value ache janar jonno
    cout << us.bucket_size(2) << "\n";

    // Delete all element - O(n)
    us.clear();

    // Swap two Unordered Set - O(1) exchange element, that is us1 er element us2 te jabe r us2 er element us1 e asbe
    unordered_set<int>us1, us2;
    us1.swap(us2);
}
