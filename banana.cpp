#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int l, c;
  cin >> l >> c;
  int cm_tabua;
  cin >> cm_tabua;
  int qtd_tabuas;
  cin >> qtd_tabuas;
  vector<int> vet;
  int iguais_l = 0;
  int iguais_c = 0;
  for (int i = 0; i < qtd_tabuas; i++) {
    int ent;
    cin >> ent;
    vet.push_back(ent);
    if (ent == l) {
      iguais_l++;
    } else if (ent == c) {
      iguais_c++;
    }
  }
  bool mais_l;
  iguais_l > iguais_c ? mais_l = true : mais_l = false;
  if (mais_l) {
  }
  return 0;
}
