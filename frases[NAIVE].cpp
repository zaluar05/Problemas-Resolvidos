#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore();
    for (int i = 0; i < quantidade;i++){
        set<char> alpha = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string entrada;
        getline(cin,entrada);
        int contador = 0;
        for(int j = 0;j < entrada.size();j++){
                if(alpha.erase(entrada[j])){
                    contador += 1;
                }
        }
        if(contador < 13){
            cout << "frase mal elaborada" << '\n';
        } else if (contador > 13 && contador < 26){
            cout << "frase quase completa" << '\n';
        }else cout << "frase completa" << '\n';
    }
    return 0;
}