#include <iostream>

using namespace std;

int main()
{
  int a, b, c, s1, s2, s3, x1, x2, x3, z, i;
  cin >> a;
  while (a > 0)
  {
    cin >> b >> c;
    i = 1;
    x1 = c;
    x2 = c;
    x3 = c;
    s1 = 0;
    s2 = 0;
    s3 = 0;

    while (x1 > 0 || x2 > 0 || x3 > 0)
    {
      if (x1 > 0)
      {
        s1 += i;
        x1 -= 1;
      }
      if (i % 2 != 0 && x2 > 0)
      {
        s2 += i;
        x2 -= 1;
      }
      if (i % 2 == 0 && x3 > 0)
      {
        s3 += i;
        x3 -= 1;
      }
      i += 1;
    }
    cout << b << " " << s1 << " " << s2 << " " << s3 << endl;
    a -= 1;
  }

  return 0;
}
