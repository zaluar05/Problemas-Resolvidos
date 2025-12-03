#include <bits/stdc++.h>
using namespace std;
int main() {

    int l, c;
    cin >> l >> c;

    int blocos = l * c;

    int pilas;
    int t_blocos = 0;
    int niveis = 0;

    vector<int> barranco(blocos);

    for (int i = 0; i < blocos; i++) {
        cin >> barranco[i];
        t_blocos += barranco[i];
    }
    sort(barranco.begin(), barranco.end());
    int media = t_blocos / blocos;
    if (t_blocos % blocos == 0) {
        int movidos = 0;
        for (int i = 0; i < blocos; i++) {
            if (barranco[i] < media) {
                movidos += media - barranco[i];
            }
        }
        pilas = 10 * movidos;
        niveis = 1;
    } else {
        int blocos_restantes = t_blocos - (blocos * media);
        int nivel_mais_alto = blocos - blocos_restantes;
        int movidos = 0;
        for (int i = 0; i < nivel_mais_alto; i++) {
            if (barranco[i] < media) {
                movidos += media - barranco[i];
            }
        }
        for (int i = nivel_mais_alto; i < blocos; i++) {
            if (barranco[i] < media + 1) {
                movidos += (media + 1 - barranco[i]);
            }
        }
        pilas = 10 * movidos;
        niveis = 2;
    }
    cout << pilas << ' ' << niveis << endl;
    return 0;
}