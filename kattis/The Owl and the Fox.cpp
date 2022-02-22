#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    cin >> a;

    while (a-- > 0)
    {
        long long r = 0, c = 0;
        cin >> b;
        if (b % 10 != 0)
        {
            r = b - 1;
            cout << r << endl;
        }
        else
        {
            while (b % 10 == 0)
            {
                b = b / 10;
                c += 1;
            }
            b -= 1;
            while (c-- > 0)
            {
                b *= 10;
            }
            cout << b << endl;
        }
    }

    return 0;
}
