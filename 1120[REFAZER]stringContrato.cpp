#include <bits/stdc++.h>
using namespace std;
int main(){
    char dig_errado = '1';
    string num_contrato = "1";
    while(cin >> dig_errado >> num_contrato && (dig_errado != '0' && num_contrato != "0")){
        //usar o while dessa maneira é mais eficiente já que a entrada fica dentro dele
        //os parenteses é para dar prioridade àquela condição
        auto nova_string = remove(num_contrato.begin(),num_contrato.end(),dig_errado); 
        //usa o remove para jogar todos os digitos
        //iguais a dig_errado para o fim da string
        //remove retorna um iterador que sinaliza o novo "fim" da string
        //agora a erase vai vir e apagar esses caracteres que estão depois do iterador
        //o auto é só para não ter que tipificar a variavel manualmente
        num_contrato.erase(nova_string,num_contrato.end());
        
        //aqui tinha sido usado um size_t 
        
        if(num_contrato.empty()){
            cout << "0" << endl;
        } else{
            int primeiro_digito_pos = num_contrato.find_first_not_of('0');
        
            if(primeiro_digito_pos == string::npos){
                cout << "0" <<endl;
           } else cout << num_contrato.substr(primeiro_digito_pos)<<endl; //essa função retorna todos os caracteres apos a pos. fornecida como argumento
        }
    }
    return 0;
}