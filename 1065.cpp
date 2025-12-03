#include <bits/stdc++.h>
int main(){
    int valor;
    int pares = 0,negativos = 0,positivos = 0,impares = 0;
    for(int i = 0;i < 5;i++){
        std::cin>>valor;
        if (valor % 2 == 0){
            pares += 1;
        }else impares += 1;
        if(valor < 0){
            negativos += 1;
        }else if (valor > 0){
            positivos += 1;
        }
    }
    std::cout << pares << " valor(es) par(es)" << std::endl;
    std::cout << impares << " valor(es) impar(es)" << std::endl;
    std::cout << positivos << " valor(es) positivo(s)" << std::endl;
    std::cout << negativos << " valor(es) negativo(s)" << std::endl;
    return 0;
}