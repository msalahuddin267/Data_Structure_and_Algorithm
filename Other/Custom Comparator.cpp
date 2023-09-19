#include<bits/stdc++.h>
using namespace std;

/*
--> Amra jokhon pairwise value sort kori tokhon ak e sathe first pair gula ascending e r second pair ta
    Descending e sort korte hobe tokon Custom Comparator diye amra seta kore thaki
--> Custom comparator diye multiple (dui, tin ba tar beshi) pair er value icchamoto sort kora jai icchamoto condition add kore
--> 2 vabe comparator likha jai akta main function er vitore r akta main function er baire alada function likhe but duitai same kaj (je jetate comfortable r ki)

*/

bool cmp(pair<int, int> x, pair<int, int> y)
{
    if(x.first == y.first) // jodi duita pair er e first value equal hoi tahole second pair er value ascending e sort hobe (jodi descending sort korte cai tahole just greater than (>) arrow kore dite hobe)
        return x.second < y.second; // jodi pair r o beshi hoi tahole ekhane r o condition add kore icchamoto sort kora jabe

    return x.first > y.first; // if condition true na hole pair er first value dhore descending e sort hobe (jodi ascending e sort korte cai tahole just smaller than (<) arrow kore dite hobe)
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp); // Custom Comparator function 1st way (Outside of main function)

    // Second way use comparator (inside main function)
    sort(v.begin(), v.end(), [&](pair<int, int> x, pair<int, int> y)
    {
        if(x.first == y.first)
            return x.second < y.second;
        return x.first > y.first;
    });

    for(auto it : v)
        cout << it.first << "  " << it.second << "\n";

    // Multiple condition example
    vector<pair<int, pair<int, long long>>> ans;
    sort(ans.begin(), ans.end(), [&](pair<int, pair<int, long long>> x, pair<int, pair<int, long long>> y)
    {
        if(x.second.first == y.second.first && x.second.second == y.second.second)
            return x.first < y.first;

        else if(x.second.first == y.second.first)
            return x.second.second < y.second.second;

        return x.second.first > y.second.first;
    });
}
