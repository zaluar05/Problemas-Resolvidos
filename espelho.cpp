#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, quantidade;
  cin >> quantidade;
  for (int i = 0; i < quantidade; i++) {
    cin >> a >> b;
    string numeros = "";
    for (int j = a; j <= b; j++) {
      numeros += to_string(j);
    }
    for (int j = b; j >= a; j--) {
      string num;
      num = to_string(j);
      reverse(num.begin(), num.end());
      numeros += num;
    }
    cout << numeros << '\n';
  }
  return 0;
}
