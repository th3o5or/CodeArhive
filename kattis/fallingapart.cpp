#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll x = 0, y = 0, n;
    cin >> n;
    vector<ll> z1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> z1.at(i);
    }
    sort(z1.begin(), z1.end());
    reverse(z1.begin(), z1.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            x += z1.at(i);
        }
        else
        {
            y += z1.at(i);
        }
    }
    cout << x << " " << y << endl;

    return 0;
}
