#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  double n, m, a;
  cin >> n >> m >> a;
  if (a >= m && a >= n) {
    cout << 1 << '\n';
    return 0;
  } else if ((long long)n % (long long)a == 0 &&
             (long long)m % (long long)a == 0) {
    printf("%.0lf\n", n * m / (a * a));
    return 0;
  } else {
    double alt = ceil(n / a);
    m = ceil(m / a);
    printf("%0.lf\n", m * alt);
  }
  return 0;
}
