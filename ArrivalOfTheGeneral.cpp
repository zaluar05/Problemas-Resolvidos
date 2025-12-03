#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  int q;
  cin >> q;
  int maior = INT_MIN;
  int menor = INT_MAX;
  int inx = 0;
  int iny = 0;
  for (int i = 1; i <= q; i++) {
    int ent;
    cin >> ent;
    if (ent <= menor) {
      menor = ent;
      inx = i;
    }
    if (ent > maior) {
      maior = ent;
      iny = i;
    }
  }
  cout << (q - inx) + (iny - 1) - 1 << '\n';
  return 0;
}
