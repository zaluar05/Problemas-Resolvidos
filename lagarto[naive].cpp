#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    for (int i =0 ; i < quantidade ;i++){
        string entrada1,entrada2;
        cin >> entrada1 >> entrada2;
        if(entrada1 == "tesoura"){
            if(entrada2 == "papel" || entrada2 == "lagarto"){
                cout << "rajesh" <<'\n';
            }
            else if(entrada2 == "tesoura") cout << "empate" << '\n';
            else cout << "sheldon" << '\n';
        }
        else if(entrada1 == "papel"){
            if(entrada2 == "pedra" || entrada2 == "spock")cout << "rajesh"<<'\n';
            else if(entrada2 == "papel") cout << "empate" << '\n';
            else cout << "sheldon" << '\n';
        }
        else if(entrada1 == "pedra"){
            if(entrada2 == "tesoura" || entrada2 == "lagarto")cout << "rajesh"<<'\n';
            else if(entrada2 == "pedra") cout << "empate" << '\n';
            else cout << "sheldon" << '\n';
        }
        else if(entrada1 == "lagarto"){
            if(entrada2 == "spock" || entrada2 == "papel")cout << "rajesh"<<'\n';
            else if(entrada2 == "lagarto") cout << "empate" << '\n';
            else cout << "sheldon" << '\n';
        }
        else if(entrada1 == "spock"){
            if(entrada2 == "pedra" || entrada2 == "tesoura")cout << "rajesh"<<'\n';
            else if(entrada2 == "spock") cout << "empate" << '\n';
            else cout << "sheldon" << '\n';
        }
    }
    return 0;
}