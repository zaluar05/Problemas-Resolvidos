#include <bits/stdc++.h>
using namespace std;
bool verifica(string num) {
  for (int i = 0; i < num.size(); i++) {
    if (num[i] != '4' && num[i] != '7') {
      return false;
    }
  }
  return true;
}

int main() {
  string num;
  cin >> num;
  // acho q que a maneira de resolver isso aqui é fazer um for até a metade do
  // numero verificando os lucky numbers
  if (verifica(num)) {
    cout << "YES\n";
    return 0;
  } else {
    int n = stoi(num);
    for (int i = 0; i <= n / 2; i++) {
      string f = to_string(i);
      if (verifica(f)) {
        if (n % i == 0) {
          cout << "YES\n";
          return 0;
        }
      }
    }
    cout << "NO\n";
  }
  return 0;
}
