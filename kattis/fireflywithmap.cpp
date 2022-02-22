#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> z1;
    vector<ll> z2;
    ll tmp;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (i % 2 == 0)
        {
            z1.push_back(tmp);
        }
        else
        {
            z2.push_back(tmp);
        }
    }
    sort(z1.begin(), z1.end());
    sort(z2.begin(), z2.end());
    ll r1 = 1e9, r2 = 0;

    for (int i = 1; i <= h; i++)
    {
        ll l = 0, r = z1.size() - 1;
        ll ru = z1.size();

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (z1.at(mid) < i)
            {
                l = mid + 1;
            }
            else
            {
                ru = mid;
                r = mid - 1;
            }
        }

        ll rd = z2.size();
        l = 0;
        r = z2.size() - 1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (z2.at(mid) < h - i + 1)
            {
                l = mid + 1;
            }
            else
            {
                rd = mid;
                r = mid - 1;
            }
        }

        ll sol = z1.size() - ru + z2.size() - rd;
        if (r1 > sol)
        {
            r1 = sol;
            r2 = 1;
        }
        else if (r1 == sol)
        {
            r2++;
        }
    }
    cout << r1 << " " << r2 << endl;
    return 0;
}
