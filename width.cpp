#include <bits/stdc++.h>
using namespace std;
int main() {
  int quantidade;
  bool primeiro = true;
  while (cin >> quantidade && quantidade != 0) {
    if (!primeiro) {
      cout << '\n';
    }
    vector<string> entradas(quantidade);
    for (int i = 0; i < quantidade; i++)
      cin >> entradas[i];
    string maior = entradas[0];
    for (int i = 0; i < quantidade; i++) {
      if (entradas[i].size() > maior.size()) {
        maior = entradas[i];
      }
    }
    for (auto m : entradas) {
      cout << setw(maior.size()) << setfill(' ') << m << '\n';
    }
    primeiro = false;
  }
  return 0;
}
