#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  int quantidade;
  cin >> quantidade;
  for (int i = 0; i < quantidade; i++) {
    string entrada;
    cin >> entrada;
    int sum = 0;
    string numeros = "";
    for (int j = 0; j < entrada.size(); j++) {
      if (isdigit(entrada[j])) {
        numeros += entrada[j];
      } else {
        if (!numeros.empty()) {
          sum += stoi(numeros);
          numeros = "";
        }
      }
    }
    if (!numeros.empty())
      sum += stoi(numeros);
    cout << sum << endl;
  }
  return 0;
}
