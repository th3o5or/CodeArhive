#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll t1, t2;
    cin >> t1 >> t2;
    vector<ll> z1(t1);
    vector<ll> z2(t2);

    for (int i = 0; i < t1; i++)
    {
        cin >> z1.at(i);
    }
    for (int i = 0; i < t2; i++)
    {
        cin >> z2.at(i);
    }
    sort(z1.begin(), z1.end());
    ll s = 0;
    for (int i = 0; i < t2; i++)
    {
        ll l = 0, r = t1 - 1;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (z1.at(mid) == z2.at(i))
            {
                ans = z1.at(mid);
                break;
            }
            else if (z2.at(i) > z1.at(mid))
            {
                l = mid + 1;
            }
            else if (z2.at(i) < z1.at(mid))
            {
                // ans = min(ans, z1.at(mid));
                r = mid - 1;
            }
        }
        if (ans == -1)
        {
            ans = z1.at(l);
        }
        s += ans - z2.at(i);
    }
    cout << s << endl;
    return 0;
}
