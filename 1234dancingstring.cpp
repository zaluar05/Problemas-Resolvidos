#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string entrada;
    while(getline(cin, entrada)){
        bool maiuscula = true;
        for(int i = 0; i < entrada.size();i++){
                if(isalpha(entrada[i])){
                  if(maiuscula){
                   entrada[i] = toupper(entrada[i]);
                  }
                  else{
                   entrada[i] = tolower(entrada[i]);
                  } 
                   maiuscula = !maiuscula;
                }
              
        }
            cout << entrada;
            cout << '\n';
    }
    return 0;
}