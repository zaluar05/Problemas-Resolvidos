#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main(){
    double a,b,c,atri,acir,atra,aqua,are;
    scanf("%lf %lf %lf", &a, &b, &c);
    atri = (a * c)/2;
    acir = pi * pow(c,2);
    atra = ((a + b) * c)/2;
    aqua = pow(b,2);
    are = a * b;
    printf("TRIANGULO: %.3lf\n" ,atri);
    printf("CIRCULO: %.3lf\n" ,acir);
    printf("TRAPEZIO: %.3lf\n" ,atra);
    printf("QUADRADO: %.3lf\n" ,aqua);
    printf("RETANGULO: %.3lf\n" ,are);
    return 0;
}