#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {
  string entrada;
  while (getline(cin, entrada)) {
    bool contou = false;
    int alitera = 0;

    entrada[0] = tolower(entrada[0]);
    char primeira_letra = entrada[0];

    for (int i = 1; i < entrada.size(); i++) {
      entrada[i] = tolower(entrada[i]);
      if (entrada[i - 1] == ' ') {
        if (entrada[i] == primeira_letra) {
          if (!contou) {
            alitera += 1;
            contou = true;
          }
        } else {
          primeira_letra = entrada[i];
          contou = false;
        }
      }
    }

    cout << alitera << '\n';
  }
  return 0;
}
