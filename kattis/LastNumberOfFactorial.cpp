#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ifstream cin{"input.txt"};
    // ofstream cout{"output.txt"};

    long long x = 1;
    int res[1000001];

    for (int i = 1; i < 1000001; i++)
    {
        x *= i;
        while (x % 10 == 0)
        {
            x = x / 10;
        }
        if (x > 999999)
        {
            x = x % 1000000;
        }
        res[i] = x % 10;
    }
    int a;
    cin >> a;
    while (a != 0)
    {

        cout << res[a] << '\n';
        cin >> a;
    }

    return 0;
}
