#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> valores(3);
  int par = 0, impar = 0;
  for(int i = 0; i < 3;i++){
    cin >> valores[i];
    valores[i] % 2 == 0? par++ : impar++;
  }
  for(int i = 0; i < 3;i++){
    if(par > impar){
        if(valores[i] % 2 != 0){
            cout << i + 1 << '\n';
            return 0;
         }else continue;
    }else{
        if(valores[i] % 2 == 0){
            cout << i + 1<< '\n';
            return 0;
         }else continue;
    }
    }
    for(int i = 3; i < n;i++){
        int ent;
        cin >> ent;
        if(par > impar){
            if(ent % 2 != 0){
                cout << i + 1<< '\n';
                return 0;
         }else continue;
        }else{
            if(ent % 2 == 0){
                cout << i + 1<< "\n";
                return 0;
         }else continue;
        }
    }
    return 0;   
}