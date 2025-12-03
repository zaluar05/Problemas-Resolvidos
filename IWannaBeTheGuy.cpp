#include <bits/stdc++.h>
using namespace std;
int main() {
  int tam;
  cin >> tam;
  int x, y;
  cin >> x;
  set<int> s;
  while (x--) {
    int ent;
    cin >> ent;
    s.insert(ent);
  }
  cin >> y;
  while (y--) {
    int ent;
    cin >> ent;
    s.insert(ent);
  }
  if (s.size() != tam) {
    cout << "Oh, my keyboard!\n";
  } else {
    cout << "I become the guy.\n";
  }
  return 0;
}
