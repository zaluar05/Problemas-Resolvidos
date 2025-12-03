#include <bits/stdc++.h>
using namespace std;
int main(){
    string numeros = "0123456789";
    int quantidade;
    cin >> quantidade;
    string entrada;
    for (int i = 0; i < quantidade;i++){
        cin >> entrada;
        int nums[10] = {0};
        for (int j = 0; j < entrada.size();j++){
            for(int k = 0;k < 10;k++){
                if (entrada[j] == numeros[k]){
                    nums[k] += 1;
                }
            }
        }
        int sum = 0;
        for(int j = 0;j < 10;j++){
            if(nums[j] != 0 && j == 1){
                sum += nums[j] * 2;
            } else if(nums[j] != 0 && j == 2 || j == 3 || j == 5){
                sum += nums[j] * 5;
            }else if(nums[j] != 0 && j == 4){
                sum += nums[j] * 4;
            }else if(nums[j] != 0 && j == 6 || j == 0 || j == 9){
                sum += nums[j] * 6;
            }else if(nums[j] != 0 && j == 7){
                sum += nums[j] * 3;
            }else if(nums[j] != 0 && j == 8){
                sum += nums[j] * 7;
            }
        }
        cout << sum << " leds" <<endl;
    }
    return 0;
}
/* versão de ia
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main() {
    // 1. Tabela de consulta (lookup table) para os LEDs.
    // Usamos um array ou vector para mapear o dígito (índice)
    // para a quantidade de LEDs (valor).
    const std::vector<int> leds_por_digito = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int quantidade;
    std::cin >> quantidade;

    for (int i = 0; i < quantidade; ++i) {
        std::string entrada;
        std::cin >> entrada;
        long long soma_total_leds = 0;

        // 2. Itera sobre cada caractere da string usando um loop "for-each".
        // Isso é mais seguro e mais moderno que o loop com índice.
        for (char c : entrada) {
            // 3. Converte o caractere do dígito ('0', '1', etc.) para seu valor inteiro (0, 1, etc.).
            // Esta é uma técnica muito comum e eficiente em C++.
            int digito = c - '0';
            
            // 4. Acessa a tabela de consulta diretamente para somar os LEDs.
            // Se o caractere não for um dígito válido, esta linha causaria um erro.
            // Por isso, é bom adicionar uma verificação se c é um dígito.
            if (digito >= 0 && digito <= 9) {
                soma_total_leds += leds_por_digito[digito];
            }
        }
        std::cout << soma_total_leds << " leds" << std::endl;
    }
    return 0;
}*/