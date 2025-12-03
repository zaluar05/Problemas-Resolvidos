#include <bits/stdc++.h>

int busca(int *vet,int inicio,int fim,int target){
  if(inicio > fim){
    return -1;
  }
  int meio = inicio + (fim - inicio)/2;
  if(vet[meio] == target){
    return meio;
  }
  else if(vet[meio] < target){
    inicio = meio + 1;
    return busca(vet,inicio,fim,target);
  }
  else {
    fim = meio - 1;
    return busca(vet,inicio,fim,target);
  }
}
int main(){
  int vet[] = {0,20,34,43};
  std::cout << busca(vet,0,3,43)<< std::endl;
  return 0;
}
