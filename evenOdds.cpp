#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long q, target;
  cin >> q >> target;
  long long cont = 0;
  if (target <= q / 2) {
    for (long long i = 1; i <= q; i += 2) {
      cont++;
      if (cont == target) {
        cout << i << '\n';
        return 0;
      } else if (cont > target) {
        break;
      }
    }
  } else {
    if (q % 2 != 0) {
      cont = (q / 2) + 1;
    } else {
      cont = q / 2;
    }
    for (long long i = 2; i <= q; i += 2) {
      cont++;
      if (cont == target) {
        cout << i << '\n';
        return 0;
      }
    }
  }
}
