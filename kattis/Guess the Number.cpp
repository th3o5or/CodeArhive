#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll l = 1, r = 1000, mid;
    mid = l + (r - l) / 2;

    string lw = "lower", hg = "higher", x;
    while (true)
    {
        cout << mid << endl;
        cin >> x;
        if (x == lw)
        {
            r = mid - 1;
        }
        else if (x == hg)
        {
            l = mid + 1;
        }
        else
        {
            return 0;
        }
        mid = l + (r - l) / 2;
    }
    return 0;
}
