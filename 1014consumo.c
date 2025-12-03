#include <stdio.h>
int main()
{
    int distancia;
    float gasto,consumo;
    scanf("%d", &distancia);
    scanf("%f", &gasto);
    consumo = distancia/gasto;
    printf("%.3f km/l\n",consumo);
    return 0;
}