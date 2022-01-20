#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    ll t1, t2;
    cin >> t1;
    vector<ll> z1;
    ll w = 0;
    vector<ll> zr;
    while (t1-- > 0)
    {
        cin >> t2;
        ll ts = t2;
        ll a;
        while (t2-- > 0)
        {
            cin >> a;
            z1.push_back(a);
        }
        ll z = 0;

                for (int i = 0; i < ts; i++)
        {
            z = 0;
            for (int p = 0; p < ts; p++)
            {
                if (z1.at(i) == z1.at(p))
                {
                    z += 1;
                }
            }
            if (z < 2)
            {
                zr.push_back(z1.at(i));
                w += 1;
                break;
            }
        }

        z1.clear();
    }
    for (int i = 1; i <= w; i++)
    {
        cout << "Case #" << i << ":"
             << " " << zr.at(i - 1) << '\n';
    }

    return 0;
}
