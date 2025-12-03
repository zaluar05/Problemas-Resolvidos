#include <bits/stdc++.h>
using namespace std;
int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int casos;
  cin >> casos;
  for (int i = 0; i < casos; i++) {
    int tamanho;
    cin >> tamanho;
    vector<int> entradas;
    for (int j = 0; j < tamanho; j++) {
      int ent;
      cin >> ent;
      entradas.push_back(ent);
    }
    sort(entradas.begin(), entradas.end());
    int menor = INT_MIN;
    for (int j = 0; j <= tamanho - 2; j += 2) {
      int res = abs(entradas[j] - entradas[j + 1]);
      menor = max(menor, res);
    }
    cout << menor << '\n';
  }
  return 0;
}
