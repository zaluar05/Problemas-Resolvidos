#include <bits/stdc++.h>
int main(){
    int x;
    int quadrado;
    std::cin >> x;
    for (int i = 1; i <= x;i++){
        if (i % 2 == 0){
            quadrado = i * i;
            std::cout << i << "^2" << " = "<< quadrado <<std::endl;
        } 
    }
    return 0;
}