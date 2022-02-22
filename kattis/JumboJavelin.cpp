#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long a, b, c = 0;
    cin >> a;
    a -= 1;
    cin >> b;
    c += b;
    while (a-- > 0)
    {
        cin >> b;
        c += b;
        c -= 1;
    }
    cout << c << endl;
    return 0;
}
