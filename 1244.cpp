#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore();
    string entrada;
    for (int j = 0; j < quantidade;j++){
        vector<string> vec;
        getline(cin,entrada);
        istringstream iss(entrada);
        string subs;
        while(iss >> subs){
        vec.push_back(subs);
        }
        stable_sort(vec.begin(), vec.end(), [](const string& a, const string& b) {
        return a.size() > b.size(); // Compara o tamanho das strings
        });
        for(int i = 0;i < vec.size();i++){
            cout << vec[i];
            if(i < vec.size() - 1){
            cout << ' ';
            }
        }
        cout << '\n';
    } 
}
