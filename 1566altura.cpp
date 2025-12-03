#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quantidade;
    cin >> quantidade;
    for(int i = 0; i < quantidade; i++){
        int tam;
        cin >> tam;
        vector<int> v(tam);
        for (auto &c : v ){
            cin >> c;
        }
        sort(v.begin(),v.end());
        bool fim = true;
         for (auto c : v ){
            if(!fim){
            cout << ' ';
            } 
            cout << c;
            fim = false;
        }
        cout << '\n';
    }
}   