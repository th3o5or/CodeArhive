#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n1;

  cin >> n1;
  for (int i = 0; i < n1; i++)
  {
    long long r = 1;
    long long w;
    cin >> w;
    for (int j = 0; j < w; j++)
    {
      long long a;
      cin >> a;
      //if (r <= 1000000000 && r >= 0)
      {
        long long b = r;
        long long m = min(a, b); 
        long long n = max(a, b);
        while (m != 0)
        {

          long long tmp = n % m;
          n = m;
          m = tmp;
        }
        r = a / n * b;
      }
    }

    if (r > 1000000000 || r <= 0)
    {
      cout << "More than a billion." << endl;
    }
    else
    {
      cout << r << endl;
    }
  }

  return 0;
}
