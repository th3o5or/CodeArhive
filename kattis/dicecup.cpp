#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll a, b;
    for (int i = 0; i < 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        b = max(x, y);
        a = min(x, y);
    }
    a += 1;
    b += 1;
    while (a <= b)
    {
        cout << a << endl;
        a += 1;
    }
    return 0;
}
