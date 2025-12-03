#include <stdio.h>
int main(){
    int tempo, velocidade;
    float consumo;
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    consumo = (tempo * velocidade) / 12.0;
    printf("%.3f\n",consumo);
}