#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore();
    for (int i = 0; i < quantidade;i++){
        string s;
        getline(cin, s);
        string primeira_metade;
        string segunda_metade;
        primeira_metade = s.substr(0,s.size()/2);
        segunda_metade = s.substr(s.size()/2,s.size());
        reverse(primeira_metade.begin(),primeira_metade.end());
        reverse(segunda_metade.begin(),segunda_metade.end());
        primeira_metade += segunda_metade;
        cout << primeira_metade << '\n';
    }
    return 0;
}