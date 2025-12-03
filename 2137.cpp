#include <bits/stdc++.h>
using namespace  std;
int main(){
    int quantidade;
    while (cin >> quantidade){
        vector<string> vec;
        for (int i = 0; i < quantidade;i++){
            string entrada;
            cin >> entrada;
            vec.push_back(entrada);
        }
        vector<int> ve;
        for (int i = 0; i < vec.size();i++){
            ve.push_back(stoi(vec[i]));
        }
        sort(ve.begin(),ve.end());  
        for (const auto& m : ve){
             cout << setw(4) << setfill('0') << m << '\n';
        }
    }
  return 0;
}