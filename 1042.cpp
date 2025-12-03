#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vet_original(3);
    vector<int> vet_ordenado(3);
    cin>>vet_original[0]>>vet_original[1]>>vet_original[2];
    for (int i = 0; i < 3; i++){
        vet_ordenado[i] = vet_original[i];
    }
    sort(vet_ordenado.begin(), vet_ordenado.end());
    for (int i = 0; i < 3; i++){
        cout << vet_ordenado[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << vet_original[i] << endl;
    }
    return 0;
}