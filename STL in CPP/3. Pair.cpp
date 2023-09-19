#include<bits/stdc++.h>
using namespace std;

/*
-->
*/

int main()
{
    // Initialize pair
    pair<int, int> p;
    p.first; // first element
    p.second; // second element


    // Pair in pair
    pair<int, pair<int, int>> pp;
    pp.first; // first element
    pp.second.first; // second element
    pp.second.second; // Third element

    // Initialize container with pair
    vector<pair<int, int>> v;
    int i = 0;

    v[i].first;
    v[i].second;

    // Initialize container with pair in pair
    vector<pair<int, pair<int, int>>> vv;

    vv[i].first;
    vv[i].second.first;
    vv[i].second.second;

}
