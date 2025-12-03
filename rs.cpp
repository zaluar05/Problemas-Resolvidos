#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int q;
  cin >> q;
  unordered_map<string, int> mapa;
  while (q--) {
    string ent;
    cin >> ent;
    if (mapa.count(ent)) {
      int novo = mapa[ent];
      string n_ent = ent + to_string(novo);
      mapa[n_ent] = novo;
      cout << n_ent << '\n';
      mapa[ent]++;
      continue;
    } else {
      cout << "OK\n";
    }
    mapa[ent]++;
  }
  return 0;
}
