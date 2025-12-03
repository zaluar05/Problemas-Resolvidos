#include <bits/stdc++.h>
using namespace std;

float tamanho_aleta(int x1,int y1,int x2,int y2){
    return sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
}
float dist_ponto_seg(int px, int py, int x1, int y1, int x2, int y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    if (dx == 0 && dy == 0) {
        return sqrt(pow(px - x1, 2) + pow(py - y1, 2));
    }
    float t = ((px - x1) * dx + (py - y1) * dy) / (dx * dx + dy * dy);
    t = max(0.0f, min(1.0f, t));
    float proj_x = x1 + t * dx;
    float proj_y = y1 + t * dy;
    return sqrt(pow(px - proj_x, 2) + pow(py - proj_y, 2));
}
int main(){
    int aletas,largura,altura;
    while(cin >> aletas){
        cin >> largura >> altura;
        int y_inicio,x_fim,y_fim;
        int cont = 1;
        float dia_min = FLT_MAX;
        while(aletas--){
            cin >> y_inicio >> x_fim >> y_fim;
            if(cont % 2 != 0){
                float dist_a_p = largura - tamanho_aleta(x_fim,y_fim,largura,altura);
                dia_min = min(dia_min,dist_a_p);
                dia_min = min(dia_min,dist_ponto_seg(x_fim,y_fim,0,0,largura,altura));
            }else{
                float dist_a_p = largura - tamanho_aleta(largura,y_inicio,x_fim,y_fim);
                dia_min = min(dia_min,dist_a_p);
                dia_min = min(dia_min,dist_ponto_seg(x_fim,y_fim,0,0,largura,0));
            }
            cont++;
        }
        cout << fixed << setprecision(2) << dia_min << "\n";
    }
    return 0;
}
