#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;

            while(n % i == 0)
            {
                n /= i;
                cnt++;
            }

            cout << i << "^" << cnt << "\n";
        }
    }

    if(n > 1)
        cout << n << "^" << 1 << "\n";
}

