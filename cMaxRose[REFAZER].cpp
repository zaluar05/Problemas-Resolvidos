#include <bits/stdc++.h>
using namespace std;
int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int casos;
  cin >> casos;
  while (casos--) {
    int tamanho, k;
    cin >> tamanho >> k;
    int contk = 0;
    while (tamanho--) {
      int entrada;
      cin >> entrada;
      if (entrada == k) {
        contk++;
      }
    }
    if (contk != 0) {
      cout << contk << '\n';
    } else if (tamanho == 0) {
      cout << 0 << '\n';
    } else
      cout << 0 << '\n';
  }
  return 0;
}
