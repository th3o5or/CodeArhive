# CodeArhive
Working Code Arhive
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll a, b;
    cin >> a >> b;
    while (a != 0 || b != 0)
    {
        a += b;
        vector<ll> z1(a);
        for (int i = 0; i < a; i++)
        {
            cin >> z1.at(i);
        }
        sort(z1.begin(), z1.end());
        ll s = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if (z1.at(i) == z1.at(i + 1))
            {
                s += 1;
                i += 1;
            }
        }
        cin >> a >> b;
        cout << s << endl;
        z1.clear();
    }

    return 0;
}
