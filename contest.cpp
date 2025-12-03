#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int q, k;
  vector<int> vet;
  cin >> q >> k;
  int avancam = 0;
  while (q--) {
    int m;
    cin >> m;
    vet.push_back(m);
  }
  for (int i = 0; i < vet.size(); i++) {
    if (vet[i] >= vet[k - 1] && vet[k - 1] >= 0 && vet[i] > 0) {
      avancam++;
    }
  }
  cout << avancam << '\n';
  return 0;
}
