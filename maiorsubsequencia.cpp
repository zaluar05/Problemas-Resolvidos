#include <bits/stdc++.h>
#include <functional>
#include <sstream>
#include <vector>
using namespace std;
int main() {
  int tamanho;
  cin >> tamanho;
  vector<int> vetor(tamanho);
  for (int i = 0; i < tamanho; i++) {
    cin >> vetor[i];
  }
  int res1 = 0;
  int maior = 0;
  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {
      if (vetor[j] > vetor[i]) {
        res1++;
        if (maior < res1) {
          maior = res1;
        }
      }
    }
    res1 = 0;
  }
  cout << maior << endl;
  return 0;
}
