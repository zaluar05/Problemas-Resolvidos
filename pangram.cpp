#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tam;
  cin >> tam;
  string s;
  cin >> s;
  set<char> letras;
  if (tam < 26) {
    cout << "NO\n";
    return 0;
  }
  for (char c : s) {
    if (isalpha(c)) {
      letras.insert(tolower(c));
      if (letras.size() == 26) {
        break;
      }
    }
  }
  // for (auto c : letras) {
  //   cout << c << " ";
  // }
  if (letras.size() == 26) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}
