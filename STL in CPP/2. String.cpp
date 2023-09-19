#include<bits/stdc++.h>
using namespace std;

/*
-->

Not Supporting Function in String :
--> push_front, pop_front


*/

int main()
{
    // Initialize string
    string s;

    // Initialize with elements
    string s1 = "Allah is Almighty.\n";

    // Initialize size and all index same value - O(n)
    string s2(5, 'a');

    // Input from user without space
    cin >> s;

    // Input from user with space (take sentence input)
    getline(cin, s);

    // Enter handling function
    fflush(stdin);
    cin.ignore();

    // Front and Back element access - O(1)
    s.front();
    s.back();

    // Insert element in back - O(1)
    s.push_back('a');

    // Add element in last - O(element size)
    s += "ball";

    // Delete element in back - O(1)
    s.pop_back();

    // Show String current Size - O(1)
    int sz = s.size();
    cout << sz << "\n";

    // Check String empty or not - O(1)
    if(s.empty()) cout << "String is Empty\n";
    else cout << "String is not Empty\n";

    // Sort string ascending order - O(n log n)
    sort(s.begin(), s.end());

    // Sort string descending order - O(n log n)
    sort(s.begin(), s.end(), greater<int>()); // or sort(s.rbegin(), s.rend());

    // Sort specific range in string ascending order - O(n log n) index 2 hote index 7 er ag porjonto
    sort(s.begin() + 2, s.begin() + 7);

    // Reverse string - O(n)
    reverse(s.begin(), s.end());

    // Reverse specific range in string - O(n) index 2 hote index 7 er ag porjonto
    reverse(s.begin() + 2, s.begin() + 7);

    // String Concatenation O(s1 length + s2 length)
    s = s1 + s2;

    // String s er 2 no index hote ses porjonto nibe - O(n)
    string s4 = s.substr(2);

    // String s er 2 no index hote 5 ta charecter nibe - O(n)
    string s5 = s.substr(2, 5);

    // Insert single character any index - O(n) Insert at index no 3
    s.insert(s.begin() + 3, 'x');

    // Insert same character multiple time - O(n) 3 number index hote 4 times x insert hobe
    s.insert(s.begin() + 3, 4, 'x');

    // Insert string in string - O(n) index no 3 hote xyz insert hobe
    s.insert(2, "xyz");

    // Delete all character - O(n)
    s.erase();

    // 3 no index hote ses porjonto sob delete hoya jabe - O(n)
    s.erase(3);

    // 3 no index hote total 2 ta character delete korbe - O(n)
    s.erase(3, 2);

    // Delete first character in string - O(n)
    s.erase(s.begin());

    // Delete specific index in string - O(n) 3 no index e je character thakbe take delete korbe
    s.erase(s.begin() + 3);

    // Delete specific range in string - O(n) index 2 hote index 7 er ag porjonto
    s.erase(s.begin() + 2, s.begin() + 7);

    // Delete first occurrence of x - O(n) first jekhane x pabe sudhu oi x delete korbe
    s.erase(find(s.begin(), s.end(), 'x'));

    // Delete all occurrence of x in this string - O(n) joto jagai x pabe sob delete kore dibe
    s.erase(remove(s.begin(), s.end(), 'x'), s.end());

    // 1 index hote, 1 soho total 4 ta character er jagai Hello replace hoya jabe - O(n)
    s.replace(1, 4, "Hello");

    // Find substring in a string - O(n)
    if(s1.find(s) != string :: npos)
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // Find and replace - O(n)
    if(s.find("EGYPT") != string :: npos) // Find a substring until string in not end
    {
        // jodi khuje pai tahole 'E' er index number return korbe (mane khuje pao string ta je index hote start hoise)
        int index = s.find("EGYPT");

        // koto no index theke suru hobe, koto ghor por ses hobe, ki dara replace hobe
        s.replace(index, 5, "BD");
    }

    // Sentence theke akta akta word return korbe - O(n)  (space paile return kore dei)
    stringstream st(s1);
    string s3;
    while(st >> s3)
    {
        cout << s3 << "\n";
    }

    // Convert integer to string - O(log n)
    string s6 = to_string(125);

    // Convert string to integer - O(n)
    int num = stoi("125");

    // Swap two character in a string - O(1)
    swap(s[2], s[4]);

    // Swap two string - O(1)
    swap(s, s1);

    // Delete all character - O(n)
    s.clear();
}
