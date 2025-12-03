#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore();
    for (int i = 0; i < quantidade;i++){
        string entrada;
        getline(cin,entrada);
        string resultado;
        if(isalpha(entrada[0])){
            resultado += entrada[0];
        }
        for (int j = 0;j < entrada.size();j++){
            if(j != 0 && !isalpha(entrada[j - 1]) && isalpha(entrada[j])){
                resultado += entrada[j];
            }   
        }
        cout << resultado << '\n';
    }
    return 0;
}