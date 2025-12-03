#include <bits/stdc++.h>
using namespace std;
int main() {
  int tam, seg;
  cin >> tam >> seg;
  string ent;
  cin >> ent;
  for (int i = 0; i < seg; i++) {
    for (int j = tam - 1; j > 0;) {
      if (ent[j - 1] == 'B' && ent[j] == 'G') {
        ent[j - 1] = 'G';
        ent[j] = 'B';
        j -= 2;
      } else {
        j--;
      }
    }
  }
  cout << ent << '\n';
  return 0;
}
