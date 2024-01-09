#include<bits/stdc++.h>
using namespace std;

/*
--> Vector is Dynamic Array
--> Vector backend implemented using dynamic array
-->
-->

Not Supporting Function in Vector :
--> push_front();
--> pop_front();

*/

int main()
{
    int n = 5, m = 3;

    // Initialize
    vector<int> vv;
    vector<int> v(n);
    vector<int> vvv(n, 5); // assign value 5 all index

    // With element
    vector<int> vt = {1,2,3,4,5};

    // Resize vector size (ager size theke jodi notun size beshi hoi tahole age oi vector e je element chilo segulai thakbe baki beshi ghor gulote 0 thakbe, r jodi kom hoi tahole baki gula delete hoya jabe
    vv.resize(n);

    // Take input from user
    for(int i = 0; i < n; i++)
    {
        //cin << v[i];
    }

    // Initialize 2D Vector
    vector<vector<int>> vvv2;
    vector<vector<int>> v2 (n); // n is row number. Here column number not mention
    vector<vector<int>> vv2 (n, vector<int> (m, 1)); // n is row number, m is column number and 2 is assign all cell value as 2

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vv2[i][j] << " ";
        }
        cout << "\n";
    }

    // If Size don't know 2D vector then use this proces
    for(int i = 0; i < n; i++)
    {
        vector<int> t;
        for(int j = 0; j < n; j++)
        {
            int x;
            //cin >> x;
            t.push_back(x);
        }
        vvv2.push_back(t);
    }

    // Insert element Back - O(1)
    v.push_back(8);
    v.push_back(10);

    // Delete element Back - O(1)
    v.pop_back();

    // Show Front element - O(1)
    int frnt = v.front();
    cout << frnt << "\n";

    // Show Back element - O(1)
    int bck = v.back();
    cout << bck << "\n";

    // Show Vector current Size - O(1)
    int sz = v.size();
    cout << sz << "\n";

    // Find max element in vector - O(n)
    int mx = *max_element(v.begin(), v.end());

    // Find min element in vector - O(n)
    int mn = *min_element(v.begin(), v.end());

    // Check Vector empty or not - O(1)
    if(v.empty()) cout << "Vector is Empty\n";
    else cout << "Vector is not Empty\n";

    // Sort element ascending order - O(n log n)
    sort(v.begin(), v.end());

    // Sort element descending order - O(n log n)
    sort(v.begin(), v.end(), greater<int>()); // or sort(v.rbegin(), v.rend());

    // Sort element specific range - O(n log n)  1 index hote 6 er ager index porjonto sort hobe mane 5 index porjonto
    sort(v.begin() + 1, v.begin() + 6);

    // Reverse element - O(n)
    reverse(v.begin(), v.end());

    // Reverse element specific range - O(n)  1 index hote 6 er ager index porjonto reverse hobe mane 5 index porjonto
    sort(v.begin() + 1, v.begin() + 6);

    // Insert single element any index - O(n)  3 hocche index number 15 hocche value
    v.insert(v.begin()+3, 15);

    // Insert same value multiple time - O(n)  2 number index hote 4 times value 20 insert hobe
    v.insert(v.begin()+2, 4, 20);

    // Insert range value - O(n) 1 number index hote ei range insert hobe
    v.insert(v.begin()+1, {12, 14, 18, 20});

    // delete any index element - O(n) 2 number index er element delete hobe
    v.erase(v.begin()+2);

    // delete range element - O(n) 1 index hote 3 index porjonto delete hobe (mane 4 index er ag porjonto)
    v.erase(v.begin()+1, v.begin()+4);

    // Delete value all occurrence - O(n) Vector e joto jagai 12 pabe sob delete korbe
    v.erase(remove(v.begin(), v.end(), 12), v.end());

    // Detete only first occurrence - O(n) Vector e first je jagai 10 pabe sudu oi iterator ta delete korbe
    v.erase(remove(v.begin(), v.end(), 10));

    // abar evabe find kore o delete kora jai
    auto it = find(v.begin(), v.end(), 10);
    if (it != v.end())
        v.erase(it);

    // Delete all even or odd numbers - O(n)
    for (auto it = v.begin(); it != v.end(); )
    {
        if (*it % 2 == 0)
            it = v.erase(it);
        else
            ++it;
    }

    // Find specific element in Vector O(n)
    auto itt = find(v.begin(), v.end(), 17);
    if (itt != v.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Show or traverse Vector all element - O(n)
    for(auto it : v)
        cout << it << " ";
    cout << "\n";

    // Show or traverse Vector all element - O(n)
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    // Delete all element - O(n)
    v.clear();

    // Swap two element/iterator in Vector - O(1)
    if(1 < v.size() && 4 < v.size()) // je duita index er value swap hobe tara vector e exist kore ki na check korse
        swap(v[1], v[4]);

    // Swap two Vector - O(1) exchange element that is vs1 er element vs2 te jabe r vs2 er element vs1 e asbe
    vector<int>vs1, vs2;
    vs1.swap(vs2);
}
