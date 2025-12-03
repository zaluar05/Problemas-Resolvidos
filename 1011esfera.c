#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main(){
    double raio, volume;
    scanf("%lf",&raio);
    volume = pow(raio,3) * pi * (4.0/3.0);
    printf("VOLUME =  %.3lf\n",volume);
    return 0;
}