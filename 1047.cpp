#include <bits/stdc++.h>

int main(){
  int a,b,c,d,hora_final,hora_inicial,tempo_total;
  std::cin >> a >> b >> c >> d;
  hora_inicial = (a * 60) + b;
  hora_final = (c * 60) + d;
  if (hora_inicial < hora_final){
    tempo_total = hora_final - hora_inicial;
  }
  else {
    tempo_total = 1440 - (hora_inicial - hora_final);
  }
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo_total/60,tempo_total % 60);
  return 0;
}
