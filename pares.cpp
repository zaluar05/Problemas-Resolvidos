#include <bits/stdc++.h>
using namespace std;

void pares(int inicio,int fim);

int main(){
    int a,b;
    cin >> a >> b;
    pares(a,b);
    return 0;
}
void pares(int inicio,int fim){
    vector<int> nums;
    for (int i = inicio; i < fim; i++){
        if(i % 2 == 0){
            nums.push_back(i);
        }
    }
    for (const auto &m : nums){
        cout << m << ' ';
    }
    cout << '\n';
}