#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    for (int i = 0; i< quantidade;i++){
        int entrada;
        cin >> entrada;
        if (entrada % 2 == 0 && entrada < 0){
            cout << "EVEN NEGATIVE" << '\n';
        }else if (entrada % 2 == 0 && entrada > 0){
            cout << "EVEN POSITIVE" << '\n';
        }else if (entrada % 2 != 0 && entrada > 0){
            cout << "ODD POSITIVE" << '\n';
        }else if (entrada % 2 != 0 && entrada < 0){
            cout << "ODD NEGATIVE" << '\n'; 
        }else cout << "NULL" << '\n';
    }
    return 0;
}