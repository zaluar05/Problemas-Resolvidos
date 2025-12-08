#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;

  cin >> a >> b >> c;
  int m = a + b * c;
  int n = a * (b + c);
  int k = a * b * c;
  int x = (a + b) * c;
  int res = max(m, x);
  res = max(n, res);
  res = max(k, res);
  res = max(a + b + c, res);
  cout << res << '\n';
}
