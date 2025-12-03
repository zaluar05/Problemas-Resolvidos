#include <bits/stdc++.h>
using namespace std;
int main(){
  int idas;
  cin >> idas;
  vector<float> resultados(idas);

  for (int i = 0;i < idas;i++){
    map<string, float> itens;
    int qtd_produtos;
    cin>>qtd_produtos;

    string produtos;
    float valor;

    for (int j = 0; j < qtd_produtos; j++) {
       cin>>produtos>>valor;
       itens[produtos] = valor;
    }

    int produtos_desejados;
    cin>>produtos_desejados;

    float total = 0;
    for (int j = 0; j < produtos_desejados; j++) {
      int quantidade;
      cin>>produtos>>quantidade;
      total += itens[produtos] * quantidade;
    }
    resultados[i] = total;
  }
  for (float valor : resultados){
    cout<<fixed<<setprecision(2)<<"R$ "<<valor<<endl;
  }
  return 0;
}
