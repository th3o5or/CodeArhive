#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll t;
    long double a, b, z1 = 0, z2 = 0, x = 0, ts;
    cin >> t;

    ts = t;
    cout << setprecision(7);
    cout << fixed;
    while (t-- > 0)
    {
        cin >> a >> b;
        z1 += a * 60;
        z2 += b;
    }
    x = z2 / z1;
    if (x <= 1)
    {
        cout << "measurement error" << endl;
        return 0;
    }
    cout << x << endl;

    return 0;
}
