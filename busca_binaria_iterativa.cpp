#include <bits/stdc++.h>

int busca(int *vetor, int inicio, int fim, int target) {
  int meio = inicio + (fim - inicio) / 2;
  if (vetor[meio] == target) {
    return meio;
  }
  while (vetor[meio] != target) {
    if (vetor[meio] < target) {
      inicio = meio + 1;
      meio = inicio + (fim - inicio) / 2;
    } else {
      fim = meio - 1;
      meio = inicio + (fim - inicio) / 2;
    }
  }
  return meio;
}
int main() {
  int vetor[] = {12, 23, 43, 233, 542, 644, 753, 7443, 14321};
  std::cout << busca(vetor, 0, 8, 23) << std::endl;
  return 0;
}
