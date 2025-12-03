#include <bits/stdc++.h>
using namespace std;
int main(){
  int distancia,media,nomes; 
  string nome;
  media = 0;
  nomes = 0;
  while(getline(cin,nome) && (cin >> distancia)){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    media += distancia;
    nomes += 1;
  }
  printf("%.1f\n",(float)media / nomes);
  return 0;
}
