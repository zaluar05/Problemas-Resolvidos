#include <bits/stdc++.h>
using namespace std;
int main(){
  float salario;
  cin>>salario;
  if(salario >= 0 && salario<=400.00){
    cout << fixed << setprecision(2) <<"Novo salario: "<<((salario * 15) / 100) + salario<<endl;
    cout << fixed << setprecision(2) <<"Reajuste ganho: "<<(salario * 15) / 100<<endl;
    cout << "Em percentual: 15 %"<<endl;
  }
  else if(salario >= 400.01 && salario<= 800.0){
    cout << fixed << setprecision(2) <<"Novo salario: "<<((salario * 12) / 100) + salario<<endl;
    cout << fixed << setprecision(2) <<"Reajuste ganho: "<<(salario * 12) / 100<<endl;
    cout << "Em percentual: 12 %"<<endl;
  }
  else if(salario >= 800.01 && salario <= 1200.00){
    cout << fixed << setprecision(2) <<"Novo salario: "<<((salario * 10) / 100) + salario<<endl;
    cout << fixed << setprecision(2) <<"Reajuste ganho: "<<(salario * 10) / 100<<endl;
    cout << "Em percentual: 10 %"<<endl;
  }
  else if(salario >= 1200.01 && salario <= 2000.00){
    cout << fixed << setprecision(2) <<"Novo salario: "<<((salario * 7) / 100) + salario<<endl;
    cout << fixed << setprecision(2) <<"Reajuste ganho: "<<(salario * 7) / 100<<endl;
    cout << "Em percentual: 7 %"<<endl;
  }
  else if(salario > 2000.00){
    cout << fixed << setprecision(2) <<"Novo salario: "<<((salario * 4) / 100) + salario<<endl;
    cout << fixed << setprecision(2) <<"Reajuste ganho: "<<(salario * 4) / 100<<endl;
    cout << "Em percentual: 4 %"<<endl;
  }
  else 
    cout <<"Valor inválido"<<endl;
  return 0;
}
