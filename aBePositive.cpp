#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int casos;
  cin >> casos;
  while (casos--) {
    int conta1 = 0, conta0 = 0, contaM1 = 0;
    int tamanho;
    cin >> tamanho;
    while (tamanho--) {
      int atual;
      cin >> atual;
      if (atual == -1)
        contaM1++;
      else if (atual == 0)
        conta0++;
      else
        conta1++;
    }
    if (contaM1 % 2 == 0) {
      cout << conta0 << '\n';
      continue;
    } else
      cout << conta0 + 2 << '\n';
  }
  return 0;
}
