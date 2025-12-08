#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string ent;
  cin >> ent;
  string res = "";
  for (int i = 0; i < ent.size();) {
    if (ent[i] == 'W' && ent[i + 1] == 'U' && ent[i + 2] == 'B') {
      i += 3;
    } else {
      res += ent[i];
      if (ent[i + 1] == 'W' && ent[i + 2] == 'U' && ent[i + 3] == 'B') {
        res += ' ';
      }
      i++;
    }
  }
  cout << res << '\n';
  return 0;
}
