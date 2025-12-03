#include <bits/stdc++.h>
using namespace std;
int main() {
  string entrada;
  bool primeiro_ = true;
  bool primeiro_ast = true;
  while (getline(cin, entrada)) {
    for (int i = entrada.length() - 1; i >= 0; i--) {
      if (entrada[i] == '_') {
        if (primeiro_) {
          entrada.replace(i, 1, "</i>");
          primeiro_ = false;
        } else {
          entrada.replace(i, 1, "<i>");
          primeiro_ = true;
        }
      } else if (entrada[i] == '*') {
        if (primeiro_ast) {
          entrada.replace(i, 1, "</b>");
          primeiro_ast = false;
        } else {
          entrada.replace(i, 1, "<b>");
          primeiro_ast = true;
        }
      }
    }
    cout << entrada << '\n';
  }
  return 0;
}
