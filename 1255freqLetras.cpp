#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore();
    for (int i = 0; i <  quantidade;i++){
        string entrada;
        getline(cin,entrada);
        for (int j = 0; j < entrada.size();j++){
            entrada[j] = tolower(entrada[j]);
        }
        map<char,int> map;
        for (const auto& m : entrada){
            if(isalpha(m)){
                map[m]++;
            }
        }
        int maior = 0;
        vector<char> chave;
        for(const auto& m : map){
            if(m.second > maior){
                maior = m.second;
            }
        }
         for(const auto& m : map){
            if(m.second == maior){
                chave.push_back(m.first);
            }
        }
        sort(chave.begin(),chave.end());
        for (const auto& f : chave){
            std::cout << f;
        }
    cout << '\n';
    }
    return 0;
}