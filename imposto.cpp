#include <iostream>
#include <iomanip>
int main(){
  float valor,dif1,res;
  dif1 = 2000.00;
  std::cin >> valor;
  float pct;
  std::cout << std::fixed << std::setprecision(2);
  if (valor <= 2000.00){
    std::cout << "Isento" << std::endl;
  } else if (valor >= 2000.01 && valor <= 3000.00) {
    valor -= dif1;
    pct = (valor*8)/100;
    std::cout << "R$ "<< pct <<std::endl;
  }else if (valor >= 3000.01 && valor <= 4500.00) {
    res = ((valor - dif1) * 0.008)
    pct = (valor*18)/100;
    std::cout << "R$ "<< pct <<std::endl;
  }else if (valor > 4500.00) {
     pct = (valor*28)/100;
    std::cout << "R$ "<< pct <<std::endl;
  }
  return 0;
}
