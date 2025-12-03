#include <bits/stdc++.h>
int main(){
    float sum = 0;
    float valor;
    int positives = 0;
    for(int i = 0;i < 6;i++){
        std::cin>>valor;
        if (valor > 0){
            sum += valor;
            positives += 1;
        }
    }
    std::cout << positives << " valores positivos" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << sum / positives << std::endl;

    return 0;
}