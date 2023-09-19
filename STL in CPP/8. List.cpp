#include<bits/stdc++.h>
using namespace std;

/*
--> List e begin()+4; evabe kora jai nah, advance ba next use kore move korte hoi
-->
-->

Not Supporting Function in List :
-->

*/

int main()
{
    // Initialize
    list<int> l;
    list<int> ll = {1,2,3,4,5}; // direct value assign

    // Insert element Front - O(1)
    l.push_front(5);
    l.push_front(10);

    // Insert element Back - O(1)
    l.push_back(8);
    l.push_back(10);

    // Delete element Front - O(1)
    l.pop_front();

    // Delete element Back - O(1)
    l.pop_back();

    // Show Front element - O(1)
    int frnt = l.front();
    cout << frnt << "\n";

    // Show Back element - O(1)
    int bck = l.back();
    cout << bck << "\n";

    // Show List current Size - O(1)
    int sz = l.size();
    cout << sz << "\n";

    // Check List empty or not - O(1)
    if(l.empty()) cout << "List is Empty\n";
    else cout << "List is not Empty\n";

    // Sort element ascending order - O(n log n)
    l.sort();

    // Sort element descending order - O(n log n)
    l.sort(greater<int>());

    // Reverse element - O(log n)
    l.reverse();

    // O(n) List e pashapashi kono similar value thakle ta delete kore dibe
    l.unique();

    // Insert single element any index - O(n)
    auto it = l.begin(); // first e iterator begin e set korte hobe
    advance(it, 3); // iterator ta 3 ghor move korbe orthat eita hobe index
    l.insert(it, 15); // 3 number index e 15 value insert hobe

    // Insert same value multiple time - O(n)
    auto it2 = l.begin();
    advance(it2, 2); // iterator ta 2 ghor move korbe orthat eita hobe index
    l.insert(it2, 4, 15); // r 15 hocche value r 4 hocche value ta koibar insert hobe

    // Insert range value - O(n) 2 number index hote ei range insert hobe
    auto it3 = l.begin();
    advance(it3, 2);
    l.insert(it3, {12, 14, 18, 20});

    // delete any index element - O(n) 2 number index er element delete hobe
    auto it4 = l.begin();
    advance(it4, 2);
    l.erase(it4);

    // delete range element - O(n) 2 index hote 4 index porjonto delete hobe (mane 5 index er ag porjonto)
    auto it5 = l.begin();
    auto it6 = l.begin();
    advance(it5, 2);
    advance(it6, 5);
    l.erase(it5, it6);

    // Delete value all occurrence - O(n) List e joto jagai 12 pabe sob delete korbe
    l.remove(12);

    // Detete only first occurrence - O(n) first je jagai 10 pabe sudu oi iterator ta delete korbe
    l.erase(remove(l.begin(), l.end(), 10));
    // abar evabe find kore delete kora jai
    auto it7 = find(l.begin(), l.end(), 10);
    if (it7 != l.end())
        l.erase(it7);

    // Delete all even numbers - O(n)
    for (auto it = l.begin(); it != l.end();)
    {
        if (*it % 2 == 0)
            it = l.erase(it);
        else
            ++it;
    }

    // Find specific element in deque O(n)
    auto itt = find(l.begin(), l.end(), 17);
    if (itt != l.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Show or traverse List all element - O(n)
    for(auto it : l)
        cout << it << " ";
    cout << "\n";

    // Delete all element - O(n)
    l.clear();

    // Swap two element in List - O(1)
    auto it8 = next(l.begin(), 1); // 1 is index (0 base index)
    auto it9 = next(l.begin(), 3); // 3 is index (0 base index)
    swap(*it8, *it9);

    // Swap two List - O(1) exchange element that is l1 er element l2 te jabe r l2 er element l1 e asbe
    list<int>l1, l2;
    l1.swap(l2);

    /*
    jodi amra duti list ke merge kori, akhon l1 er sathe l2 er elements gula merge hoya jabe and
    l2 empty hoya jabe, jodi list duti ascending sorted obosthai thake tahole ascending sorted akarei
    merge hobe r na hole randomly merge hobe jodi descending eo thake
    */
    l1.merge(l2); // O(n)
}
