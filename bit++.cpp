#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int q;
  int x = 0;
  cin >> q;
  while (q--) {
    string ent;
    cin.ignore();
    cin >> ent;
    ent.find("++") != string::npos ? x++ : x--;
  }
  cout << x << '\n';
  return 0;
}
