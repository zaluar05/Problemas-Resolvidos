#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> vet;
  while (n--) {
    int ent;
    cin >> ent;
    vet.push_back(ent);
  }
  sort(vet.begin(), vet.end());
  bool prim = true;
  for (int &a : vet) {
    prim ? cout << a << ' ' : cout << ' ' << a;
    prim = false;
  }
  cout << endl;
  return 0;
}
