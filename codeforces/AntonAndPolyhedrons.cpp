#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int q;
  cin >> q;
  int sum = 0;
  unordered_map<string, int> mp = {{"Tetrahedron", 4},
                                   {"Cube", 6},
                                   {"Octahedron", 8},
                                   {"Dodecahedron", 12},
                                   {"Icosahedron", 20}};
  while (q--) {
    string s;
    cin >> s;
    sum += mp[s];
  }
  cout << sum << "\n";
  return 0;
}
