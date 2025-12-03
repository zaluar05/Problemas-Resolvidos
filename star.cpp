#include <bits/stdc++.h>
using namespace std;
double distancia(vector<double> p1, vector<double> p2) {
    return sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2) + pow(p1[2] - p2[2], 2));
}
bool quase_igual(double d1, double d2, double margem_erro = 0.01) {
    if (d1 == 0 && d2 == 0) return true;
    return fabs(d1 - d2) < margem_erro * max(fabs(d1), fabs(d2));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (true) {
        vector<vector<double>> coordenadas(4, vector<double>(3));
        for (int i = 0; i < 4; i++) {
            cin >> coordenadas[i][0] >> coordenadas[i][1] >> coordenadas[i][2];
        }
        if (coordenadas[0][0] == 0 && coordenadas[0][1] == 0 && coordenadas[0][2] == 0) {
            return 0;
        }
        for (int alterado = 0; alterado < 4; alterado++) {
            int a = (alterado + 1) % 4;
            int b = (alterado + 2) % 4;
            int c = (alterado + 3) % 4;
            
            double d1 = distancia(coordenadas[a], coordenadas[b]);
            double d2 = distancia(coordenadas[a], coordenadas[c]);
            double d3 = distancia(coordenadas[b], coordenadas[c]);
            
            if (quase_igual(d1, d2) && quase_igual(d1, d3) && quase_igual(d2, d3)) {
                cout << alterado + 1 << "\n";
                break; 
            }
        }
    }
    return 0;
}