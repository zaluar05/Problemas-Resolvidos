#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
using namespace std;

bool isvowel(char ver) {
  if (ver == 'a' || ver == 'e' || ver == 'i' || ver == 'o' || ver == 'u' ||
      ver == 'y') {
    return true;
  } else
    return false;
}
int main() {
  string ent;
  cin >> ent;
  string saida = "";
  for (int i = 0; i < ent.size(); i++) {
    ent[i] = tolower(ent[i]);
    if (isvowel(ent[i])) {
      continue;
    } else {
      saida += '.';
      saida += ent[i];
    }
  }
  cout << saida << '\n';
  return 0;
}
