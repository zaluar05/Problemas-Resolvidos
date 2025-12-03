#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  char ent;
  bool eh = true;
  bool notPlus = false;
  int cont = 0;
  while (cin >> ent) {
    if (ent == 'H' || ent == 'Q' || ent == '9') {
      eh = false;
      break;
    } else if (ent != '+') {
      notPlus = true;
    } else if (ent == '+') {
      cont += 1;
    }
  }
  if (cont >= 2 && !notPlus && eh) {
    cout << "NO\n";
    return 0;
  }
  if (eh) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
  return 0;
}
