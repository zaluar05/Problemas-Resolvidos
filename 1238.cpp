#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    for (int i = 0; i < quantidade;i++){
        string entrada1,entrada2;
        cin >> entrada1;
        cin >> entrada2;
        int tamanho_min = std::min(entrada1.length(), entrada2.length()); //ve qual é a menor string
        string res = "";
        for(int j = 0; j < tamanho_min;j++){
            res += entrada1[j];
            res += entrada2[j];
        }
        if (entrada1.length() > tamanho_min){
            res += entrada1.substr(tamanho_min);
        } else  res += entrada2.substr(tamanho_min);
    cout << res <<endl;
    }
    return 0;
}