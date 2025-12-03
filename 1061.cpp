//REFAZER USANDO SEGUNDOS, MUITO MAIS SIMPLES DE USAR DO QUE MINUTOS
//fmod é o resto da divisão de float!!!!!!!
#include <bits/stdc++.h>
using namespace std;
int main(){
    float dias,horas,minutos,segundos;
    string descartada;
    char lixo; //ESSA IDEIA PARA LER OS DOIS PONTOS É BOA
    cin >> descartada >> dias; //A IDEIA DE USAR UMA STRING PARA NADA É BOA
    cin >> horas >> lixo >> minutos >> lixo >> segundos;
    
    horas = horas * 3600; //transforma em segundos
    minutos = minutos * 60; //transforma em segundos
    dias = (dias * 24)*3600; //transforma em segundos
    
    float dias_final,horas_final,minutos_final,segundos_final;
    cin >> descartada >> dias_final;
    cin >> horas_final >> lixo >> minutos_final >> lixo >> segundos_final;

    horas_final = horas_final * 3600;
    dias_final = (dias_final * 24) * 3600;

    float total_segundos_iniciais = dias + horas + minutos + segundos;
    float total_segundos_finais = dias_final + horas_final + minutos_final + segundos_final;
    int res = round(total_segundos_finais - total_segundos_iniciais);
    
    cout << res /(24 *3600) << " dias(s)" << endl;
    cout << (res %(24 * 3600)) / 3600  << " hora(s)" << endl;
    cout << (res % 3600) / 60 << " minuto(s)" << endl;
    cout << res % 60 << " segundo(s)" << endl;

    return 0;
}