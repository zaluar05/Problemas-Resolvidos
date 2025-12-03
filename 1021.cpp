#include <bits/stdc++.h>
int main(){
    float valor;
    std::cin >> valor;
    int quantidade[12];
    int valores[] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    valor *= 100;
    int valor_int = (int)valor;
    for(int i = 0;i < 12;i++){
        quantidade[i] = valor_int / valores[i];
        valor_int = valor_int % valores[i];
    }
    printf("NOTAS:\n");
    for(int i = 0; i < 6;i++){
        printf("%d nota(s) de R$ %.2f\n",quantidade[i],valores[i] / 100.0);
    }
    printf("MOEDAS:\n");
    for(int i = 6; i < 12;i++){
        printf("%d moeda(s) de R$ %.2f\n",quantidade[i],valores[i] / 100.0);
    }
    return 0;
}
