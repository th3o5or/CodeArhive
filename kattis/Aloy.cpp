#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a;
    cin >> a;

    cout << setprecision(8);
    cout << fixed;
    if (a >= 1)
    {
        cout << 0.25 << endl;
        return 0;
    }
    a = a / 2;
    a = pow(a, 2);
    cout << a << endl;

    return 0;
}
