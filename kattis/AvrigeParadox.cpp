#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double t, n1, n2, n11, a, b, x1 = 0, x2 = 0, y1 = 0, y2 = 0, s1, s2, rez = 0;
    cin >> t;
    while (t-- > 0)
    {
        x1 = 0;
        x2 = 0;
        y1 = 0;
        y2 = 0;
        rez = 0;

        cin >> n1 >> n2;
        n11 = n1 - 1;

        vector<int> z1;
        vector<int> z2;

        while (n1-- > 0)
        {
            cin >> a;
            z1.push_back(a);
            x1 += a;
            x2++;
        }

        s1 = x1 / x2;

        while (n2-- > 0)
        {
            cin >> b;
            z2.push_back(b);
            y1 += b;
            y2++;
        }
        s2 = y1 / y2;

        for (int i = 0; i <= n11; i++)
        {

            if (z1.at(i) < s1 && z1.at(i) > s2)
            {
                rez++;
            }
        }
        cout << rez << endl;
    }

    return 0;
}
