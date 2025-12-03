#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada;
    while(getline(cin,entrada)){
        bool car = false;
        bool maiuscula = false;
        bool minuscula = false;
        bool num = false;
        bool tam = true;
        if(entrada.size() >= 6 && entrada.size() <= 32) tam = false;
        for (auto m : entrada){
            if(isdigit(m)) num = true;
            else if(!isalpha(m) && !isdigit(m)) car = true;
            else if(m >= 'A' && m <= 'Z')  maiuscula = true;
            else if(m >= 'a' && m <= 'z')  minuscula = true;
        }
        if(!car && maiuscula && minuscula && num && !tam) cout << "Senha valida." <<'\n';
        else cout << "Senha invalida." << '\n'; 
    }
    return 0;
}