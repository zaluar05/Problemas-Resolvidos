#include <bits/stdc++.h>
#include <type_traits>
using namespace std;

bool digonais(int x1, int x2, int y1, int y2) {
  int maior = x1;
  int menor = y2;
  if (x1 < y1) {
    maior = y1;
    menor = x1;
  }
  for (int i = maior; i <= 8; i++) {
    x1++;
    y1++;
    if (x1 == x2 && y1 == y2) {
      return true;
    }
  }
  for (int i = menor; i >= 0; i--) {
    x1--;
    y1--;
    if (x1 == x2 && y1 == y2) {
      return true;
    }
  }
  for (int i = maior; i <= 8; i++) {
    x1++;
    y1--;
    if (x1 == x2 && y1 == y2) {
      return true;
    }
  }
  for (int i = menor; i >= 0; i--) {
    x1--;
    y1++;
    if (x1 == x2 && y1 == y2) {
      return true;
    }
  }
  return false;
}
int main() {
  int x1, y1, x2, y2;
  while (cin >> x1 >> y1 >> x2 >> y2) {
    if (y2 == y1 || x1 == x2) {
      cout << '0' << endl;
    } else if (digonais(x1, x2, y1, y2)) {
      cout << '2' << endl;
    } else
      cout << '1' << endl;
  }
  return 0;
}
