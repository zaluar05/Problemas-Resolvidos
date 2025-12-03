#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numero_canetas;
    while(cin >> numero_canetas){
        int sum_total = 0;
        int sum = 0;
        for(int i = 1; i <= numero_canetas;i++){
            sum_total += i;
        }
        for(int i = 0;i < numero_canetas - 1; i++){
            int c;
            cin >> c;
            sum  += c;
        }
        cout << sum_total - sum << '\n';
        }
    return 0;
}