#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  char ent;
  unordered_map<char, int> cartas;
  while (cin >> ent) {
    if (isalpha(ent)) {
      cartas[ent]++;
    }
  }
  cout << cartas.size() << '\n';
}
