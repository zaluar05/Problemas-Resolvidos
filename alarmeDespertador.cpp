#include <bits/stdc++.h>
using namespace std;
int main() {
  int h1, m1, h2, m2;
  while ((cin >> h1 >> m1 >> h2 >> m2) &&
         (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)) {
    h1 = h1 * 60;
    h2 = h2 * 60;
    if (h2 <= h1) {
      h1 += m1;
      h2 += m2;
      int min = 1440 - (h1 - h2);
      cout << min << endl;
    } else {
      int res = (h2 + m2) - (h1 + m1);
      cout << res << endl;
    }
  }
  return 0;
}
