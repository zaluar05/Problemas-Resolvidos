#include <bits/stdc++.h>
using namespace std;
int main(){
    char errado = '1';
    string entrada = "1";
    while(cin >> errado >> entrada && (errado != '0' && entrada != "0")){

        auto indice_novo_inicio = remove(entrada.begin(),entrada.end(),errado);
    
        entrada.erase(indice_novo_inicio,entrada.end());

        if(entrada.empty()){
            cout << "0" <<endl;
        }else{
            size_t primeiro_digito_pos = entrada.find_first_not_of('0');

            if(primeiro_digito_pos == string::npos){
                cout << "0" << endl;
            }else{
                cout << entrada.substr(primeiro_digito_pos) << endl;
            }
        }
    }
    return 0;
}