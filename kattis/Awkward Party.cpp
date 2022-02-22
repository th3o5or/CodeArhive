#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> z1;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        z1.push_back(make_pair(a, i));
    }
    sort(z1.begin(), z1.end());
    ll s = 1e9;

    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        if (z1.at(i).first == z1.at(i + 1).first)
        {
            x = z1.at(i + 1).second - z1.at(i).second;
            if (x < s)
            {
                s = x;
            }
        }
    }
    if (s == 1e9)
    {
        s = n;
    }
    cout << s << endl;
    return 0;
}
