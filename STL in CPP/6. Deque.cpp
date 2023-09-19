#include<bits/stdc++.h>
using namespace std;

/*
--> Deque (double-ended queue) start 0 index like vector
--> Deque implemented using a dynamic array of fixed-size blocks
--> Deque vector er moton e but kichu extra function use kora jai
--> Deque eo vector er moto size initialize kore array er moto input neo jai
-->

Not Supporting Function in Deque :
-->

*/

int main()
{
    int n = 5, m = 3;

    // Initialize
    deque<int> dq;
    deque<int> d(n);
    deque<int> dd(n, 5); // assign value 5 all index

    // Take input from user like vector
    for(int i = 0; i < n; i++)
    {
        //cin << d[i];
    }

    // Initialize 2D Deque
    deque<deque<int>>ddq1;
    deque<deque<int>>ddq2 (n); // n is row number. here column number not mention
    deque<deque<int>>ddq (n, deque<int> (m, 1)); // n is row number, m is column number and 2 is assign all cell value as 2

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << ddq[i][j] << " ";
        }
        cout << "\n";
    }

    // Insert element Front - O(1)
    dq.push_front(5);
    dq.push_front(10);

    // Insert element Back - O(1)
    dq.push_back(8);
    dq.push_back(10);

    // Delete element Front - O(1)
    dq.pop_front();

    // Delete element Back - O(1)
    dq.pop_back();

    // Show Front element - O(1)
    int frnt = dq.front();
    cout << frnt << "\n";

    // Show Back element - O(1)
    int bck = dq.back();
    cout << bck << "\n";

    // Show Deque current Size - O(1)
    int sz = dq.size();
    cout << sz << "\n";

    // Check Deque empty or not - O(1)
    if(dq.empty()) cout << "Deque is Empty\n";
    else cout << "Deque is not Empty\n";

    // Sort element ascending order - O(n log n)
    sort(dq.begin(), dq.end());

    // Sort element descending order - O(n log n)
    sort(dq.begin(), dq.end(), greater<int>()); // or sort(dq.rbegin(), dq.rend());

    // Reverse element - O(n)
    reverse(dq.begin(), dq.end());

    // Insert single element any index - O(n) 3 hocche index number 15 hocche value
    dq.insert(dq.begin()+3, 15);

    // Insert same value multiple time - O(n) 2 number index hote 4 times value 20 insert hobe
    dq.insert(dq.begin()+2, 4, 20);

    // Insert range value - O(n) 1 number index hote ei range insert hobe
    dq.insert(dq.begin()+1, {12, 14, 18, 20});

    // delete any index element - O(n) 2 number index er element delete hobe
    dq.erase(dq.begin()+2);

    // delete range element - O(n) 1 index hote 3 index porjonto delete hobe (mane 4 index er ag porjonto)
    dq.erase(dq.begin()+1, dq.begin()+4);

    // Delete value all occurrence - O(n) Deque e joto jagai 12 pabe sob delete korbe
    dq.erase(remove(dq.begin(), dq.end(), 12), dq.end());

    // Detete only first occurrence - O(n) Deque e first je jagai 10 pabe sudu oi iterator ta delete korbe
    dq.erase(remove(dq.begin(), dq.end(), 10));
    // abar evabe find kore o delete kora jai
    auto it = find(dq.begin(), dq.end(), 10);
    if (it != dq.end())
        dq.erase(it);

    // Delete all even or odd numbers - O(n)
    for (auto it = dq.begin(); it != dq.end();)
    {
        if (*it % 2 == 0)
            it = dq.erase(it);
        else
            ++it;
    }

    // Find specific element in deque O(n)
    auto itt = find(dq.begin(), dq.end(), 17);
    if (itt != dq.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Show or traverse Deque all element - O(n)
    for(auto it : dq)
        cout << it << " ";
    cout << "\n";

    // Show or traverse Deque all element like vector - O(n)
    for(int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << "\n";

    // Delete all element - O(n)
    dq.clear();

    // Swap two element/iterator in deque - O(1)
    if(1 < dq.size() && 4 < dq.size()) // je duita index er value swap hobe tara deque e exist kore ki na check korse
        swap(dq[1], dq[4]);

    // Swap two Deque - O(1) exchange element that is dq1 er element dq2 te jabe r dq2 er element dq1 e asbe
    queue<int>dq1, dq2;
    dq1.swap(dq2);
}
