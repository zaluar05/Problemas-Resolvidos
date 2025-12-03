#include <stdio.h>
int main(){
    int tempo,horas,minutos,segundos;
    scanf("%d",&tempo);
    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = (tempo % 3600) % 60;
    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}