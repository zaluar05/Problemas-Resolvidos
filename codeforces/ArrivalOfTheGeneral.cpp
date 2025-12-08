#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  int q;
  cin >> q;
  int maior = INT_MIN;
  int menor = INT_MAX;
  int indx_menor = 0;
  int index_maior = 0;
  for (int i = 1; i <= q; i++) {
    int ent;
    cin >> ent;
    if (ent <= menor) {
      menor = ent;
      indx_menor = i;
    }
    if (ent > maior) {
      maior = ent;
      index_maior = i;
    }
  }
  if (q == 2 && index_maior > indx_menor) {
    cout << 1 << '\n';
    return 0;
  }
  int res;
  if (index_maior < indx_menor) {
    res = (q - indx_menor) + (index_maior - 1);
    if (res <= 0)
      res = 0;
    cout << res << '\n';
  } else {
    res = (q - indx_menor - 1) + (index_maior - 1);
    if (res <= 0)
      res = 0;
    cout << res << '\n';
  }
  return 0;
}
