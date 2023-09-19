#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

/*
--> PBDS hocche policy based data structure, set r multi set e je je operation kora jai pbds eo same jinis
    same time complexity tei kora jai, but duti extra powerful function use kora jai akta hocche index access
    kora jai mane specific index e koto value ache seta jana jai r akta hocche oi container er akta element
    dile bole dibe je oi element er age r kotogulo element ache
--> PBDS use korte hole must uporer file gula add korte hobe
--> amra jodi normal set er moto use kori tahole template line e less(green bold hoya ache) likhte hoi
--> jodi elements gula descending e rakhte cai tahole less er jagai greater likhte hobe
--> r jodi multiset er moto use kori orthat duplicate value allow korte cai tahole less er jagai less_equal r
    greater er jagai greater_equal likhlei hobe tobe eta erase r find function e jhamela kore
--> tai jodi multiset hisabe use korte hoi tahole amra pair akare (value r oi value er count) element gula push korbo

Not Supporting Function :
-->

*/

int main()
{
    // Initialize
    pbds<int> p;

    p.insert(10);
    p.insert(5);
    p.insert(2);
    p.insert(5);

    for(auto it : p)
        cout << it << " ";
    cout << "\n";

    // O(log n) - kon index e koto value ache seta dekhte caile (0 base index) jehetu eta iterator return kore tai * diye value dekhte hoi
    cout << *p.find_by_order(1) << "\n";

    // O(log n) - x er age koita vaule ache jante caile (x er jagai 10 use kora hoise)
    cout << p.order_of_key(10) << "\n";

    // O(log n) - x er pore koita vaule ache jante caile (x er jagai 10 use kora hoise)
    cout << (p.size() - 1) - p.order_of_key(10) << "\n";


    /*
    Multiset er moto use korte hole (pair er maddhome)
    Jodi multiset use korte hoi r erase ba find er kono kaj na thake tahole less_equal / greater_equal diye use korbo
    */

    pbds<pair<int, int>> pm;

    // jokhon user theke input nibo tokhon akta map niye value er counting track rakhbo (map[value]++; pm.insert({value, map[value]})
    pm.insert({10, 1});
    pm.insert({4, 1});
    pm.insert({10, 2});
    pm.insert({7, 1});
    pm.insert({4, 2});
    pm.insert({12, 1});
    pm.insert({10, 3});

    for(auto it : pm)
        cout << it.first << " ";
    cout << "\n";

    // O(log n) - kon index e koto value ache seta dekhte caile (0 base index) jehetu eta iterator return kore tai * diye value dekhte hoi
    auto idx = *pm.find_by_order(2);
    cout << idx.first << "\n";

    // O(log n) - x er age koita value ache jante caile (eikhane 10, 1 er mane holo 1st 10 er age koita element ache)
    cout << pm.order_of_key({10, 1}) << "\n";

    // O(log n) - x er pore koita vaule ache jante caile (eikhane 10, 2 er mane holo 2nd 10 er pore koita element ache)
    cout << (pm.size() - 1) - pm.order_of_key({10, 2}) << "\n";
}
