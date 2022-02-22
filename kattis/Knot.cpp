#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll t, t2, t2s, t3, a;
    vector<ll> z1;
    vector<ll> z2;
    cin >> t;
    t2 = t - 1;
    t2s = t2;
    t3 = t;
    while (t-- > 0)
    {
        cin >> a;
        z1.push_back(a);
    }
    while (t2-- > 0)
    {
        cin >> a;
        z2.push_back(a);
    }
    ll z = 0;
    for (int i = 0; i < t3; i++)
    {
        z = 0;
        for (int p = 0; p < t2s; p++)
        {
            if (z1.at(i) == z2.at(p))
            {
                z = 1;
                break;
            }
            else
            {
                        }
        }
        if (z == 0)
        {
            cout << z1.at(i) << '\n';
            return 0;
        }
    }

    return 0;
}
