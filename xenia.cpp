#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  string entrada;
  cin >> entrada;
  vector<int> vet;
  for (auto m : entrada) {
    if (isdigit(m)) {
      vet.push_back(m - '0');
    }
  }
  bool primeira = true;
  sort(vet.begin(), vet.end());
  for (auto m : vet) {
    if (!primeira) {
      cout << "+" << m;
    } else {
      cout << m;
      primeira = false;
    }
  }
  printf("\n");
  return 0;
}
