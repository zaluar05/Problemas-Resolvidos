#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int sum = 0;
  for (int i = 1; i <= e; i++) {
    if (i % a != 0 && i % b != 0 && i % c != 0 && i % d != 0)
      sum += 1;
  }
  cout << e - sum << '\n';
  return 0;
}
