#include <bits/stdc++.h>
using namespace std;
int main(){
    int vezes;
    while(cin >> vezes && vezes != 0){
        map<int,int> placares;
        for (int i = 0; i < vezes; i++)
        {
            int entrada;
            cin >> entrada;
            placares[entrada] ++;
        }
                cout << "Mary won " << placares[0] << " times and John won " << placares[1] << " times\n";
    }
    return 0;
}