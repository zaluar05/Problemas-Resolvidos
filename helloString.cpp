#include <bits/stdc++.h>
using namespace std;
int main() {
  string entrada;
  cin >> entrada;
  string alvo = "hello";
  int i = 0;
  for (const char &m : entrada) {
    if (m == alvo[i]) {
      i++;
    } else if (i == alvo.size()) {
      break;
    }
  }
  if (i == alvo.size()) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
