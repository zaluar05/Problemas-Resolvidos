#include <bits/stdc++.h>
int main(){
  int valor,quantidade[7];
  int notas[] = {100,50,20,10,5,2,1};
  std::cin >> valor;
  printf("%d\n",valor);
  for(int i = 0; i < 7;i++){
    quantidade[i] = valor / notas[i];
    valor = valor % notas[i];
  }
  for(int i = 0; i < 7;i++){
    printf("%d nota(s) de R$ %d,00\n",quantidade[i],notas[i]);
  }
  return 0;
}
