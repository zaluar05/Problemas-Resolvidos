#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    for (int i = 0; i < quantidade;i++){
        int pessoas;
        cin >>  pessoas;
        vector<string> idiomas;
        for (int j = 0; j < pessoas;j++){
            string idioma;
            cin >> idioma;
            idiomas.push_back(idioma);
        }
        bool diferentes = false;
        for(int j = 0; j < idiomas.size() - 1;j++){
                if (idiomas[j] != idiomas[j + 1]){
                    diferentes = true;
                    break;
                }
        }
        if(diferentes){
            cout << "ingles" << '\n';
        }else cout << idiomas[0] << '\n';
    }
    return 0;
}