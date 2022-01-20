#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double t;
    cout << setprecision(3);
    cout << fixed;
    cin >> t;
    while (t-- > 0)
    {
        long double n, ns, n1, n2 = 0, a, x, m1 = 0, m2 = 0;
        cin >> n;
        ns = n;
        n1 = n - 1;

        vector<int> z1;
        while (n-- > 0)
        {
            cin >> a;
            z1.push_back(a);
            m1 += a;
            m2++;
        }
        x = m1 / m2;

        for (int i = 0; i <= n1; i++)
        {
            if (z1.at(i) > x)
            {
                n2 += 1;
            }
        }

        long double z;
        z = 100 / ns;

        long double s;
        s = n2 * z;
        cout << s << "%" << endl;
    }

    return 0;
}
