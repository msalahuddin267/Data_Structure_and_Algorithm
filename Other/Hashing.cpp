#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

int hashing(string s, int base)
{
    int x = 1, val = 0;

    for(auto ch : s)
    {
        int asci = ch - 'a' + 1;
        val += (asci * (x % mod)) % mod;
        val %= mod;
        x = ((x % mod) * base) % mod;
    }
    return val;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<pair<int, int>> st;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        st.insert({hashing(s, 2), hashing(s, 3)});
    }

    int q;
    cin >> q;

    while(q--)
    {
        string s;
        cin >> s;

        if(st.find({hashing(s, 2), hashing(s, 3)}) != st.end())
            cout << "yes\n";
        else
            cout << "no\n";
    }
}

