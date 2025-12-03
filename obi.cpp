#include <bits/stdc++.h>
using namespace std;
int main() {
  int quantidade;
  cin >> quantidade;
  for (int i = 0; i < quantidade; i++) {
    string entrada;
    cin >> entrada;
    if (entrada.size() == 3) {
      if (entrada[0] == 'O' && entrada[1] == 'B') {
        entrada = "OBI";
      }
    } else if (entrada[0] == 'U' && entrada[1] == 'R') {
      entrada = "URI";
    }
    cout << entrada << (i == quantidade - 1 ? '\n' : ' ');
  }
  return 0;
}
