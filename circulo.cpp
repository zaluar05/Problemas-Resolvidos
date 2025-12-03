#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int l, c, r1, r2;
  while (cin >> l >> c >> r1 >> r2 && (l || c || r1 || r2)) {
    int d1 = r1 * 2;
    int d2 = r2 * 2;
    int dmaior = max(d1, d2);
    bool cabe = false;
    if (d1 + d2 <= l && dmaior <= c) {
      cabe = true;
    }
    if (d1 + d2 <= c && dmaior <= l) {
      cabe = true;
    }
    if (!cabe) {
      int s = r1 + r2;
      if (l >= d1 && l >= d2 && c >= d1 && c >= d2) {
        long long dist_sq = (long long)(l - s) * (l - s) + (long long)(c - s) * (c - s);
        long long need_sq = (long long)s * s;
        if (dist_sq >= need_sq) {
          cabe = true;
        }
      }
    }
    cabe ? cout << "S\n" : cout << "N\n";
  }
  return 0;
}
