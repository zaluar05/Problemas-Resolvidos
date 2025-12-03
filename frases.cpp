#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore();
    for (int i = 0; i < quantidade;i++){
        set<char> alpha;
        string entrada;
        getline(cin,entrada);
        for (int j = 0;j < entrada.size();j++){
            if(isalpha(entrada[j])) alpha.insert(entrada[j]);
        }
        if (alpha.size() == 26) cout << "frase completa" << '\n';
        else if (alpha.size() > 13 && alpha.size() < 26) cout << "frase quase completa" << '\n';
        else cout << "frase mal elaborada" << '\n';
    }
    return 0;
}