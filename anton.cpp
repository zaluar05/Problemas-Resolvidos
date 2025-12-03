#include <bits/stdc++.h>
using namespace std;
int main() {
  int q;
  cin >> q;
  map<char, int> mapa;
  mapa['A'] = 0;
  mapa['D'] = 0;
  for (int i = 0; i < q; i++) {
    char ent;
    cin >> ent;
    if (q == 1) {
      ent == 'A' ? cout << "Anton\n" : cout << "Danik\n";
      return 0;
    }
    mapa[ent]++;
  }
  vector<int> vet;
  for (auto m : mapa) {
    vet.push_back(m.second);
  }
  if (vet[0] > vet[1]) {
    cout << "Anton\n";
  } else if (vet[1] > vet[0]) {
    cout << "Danik\n";
  } else {
    cout << "Friendship\n";
  }
  return 0;
}
