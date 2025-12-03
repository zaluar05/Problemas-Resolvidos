#include <bits/stdc++.h>
using namespace std;
int main(){
  map<int,string> ddd;
  ddd[61] = "Brasilia";
  ddd[71] = "Salvador";
  ddd[11] = "Sao Paulo";
  ddd[21] = "Rio de Janeiro";
  ddd[32] = "Juiz de Fora";
  ddd[19] = "Campinas";
  ddd[27] = "Vitoria";
  ddd[31] = "Belo Horizonte";

  int valor;
  std::cin >> valor;

  //tem uma maneira de fazer isso aqui com um tal de .find
  //(olhar mais o funcionamento do map)
  for(auto &par : ddd){
    if (par.first == valor){
      std::cout << par.second<<endl;
      return 0;
    }
  }
  std::cout <<"DDD nao cadastrado"<<endl;
  return 0;
}
