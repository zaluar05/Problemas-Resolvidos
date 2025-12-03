#include <bits/stdc++.h>
using namespace std;
int main() {
  string ent;
  cin >> ent;
  int cont = 1;
  char atual;
  for (int i = 0; i < ent.size() - 1; i++) {
    atual = ent[i];
    if (ent[i] == ent[i + 1]) {
      cont++;
    } else {
      cont = 1;
    }
    if (cont == 7) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
