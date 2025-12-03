#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x1,x2,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta = pow(b,2)-4*a*c;
    if (a == 0 || delta < 0){
        printf("Impossivel calcular\n");
        return 1;
    }
    delta = sqrt(delta);
    x1 = (-b + delta)/(2*a);
    x2 = (-b - delta)/(2*a);
    printf("R1 = %.5lf\n",x1);
    printf("R2 = %.5lf\n",x2);
    return 0;
}