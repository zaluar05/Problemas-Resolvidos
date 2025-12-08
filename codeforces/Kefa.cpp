#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 1){
        cout << 1 << '\n';
        return 0;
    }
    vector<int> valores(n);
    int ans = 1;
    int atual = INT_MIN;
    int melhor = 1;
    for(int i =0;i< n;i++){
        cin >> valores[i];
    }
    for(int j = 1;j < n ;j++){
        if(valores[j] >= valores[j -1]){
            ans ++;
            melhor = max(melhor,ans);
        }else ans = 1;
    }
    cout << melhor << '\n';
    return 0;
}