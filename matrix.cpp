#include <bits/stdc++.h>
using namespace std;
int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int coluna, linha;
  bool encontrado = false;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      int ent;
      cin >> ent;
      if (ent == 1) {
        linha = i;
        coluna = j;
        encontrado = true;
        break;
      }
    }
    if (encontrado)
      break;
  }
  cout << abs(linha - 3) + abs(coluna - 3) << '\n';
  return 0;
}
