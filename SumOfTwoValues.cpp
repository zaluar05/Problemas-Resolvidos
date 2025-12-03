#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tam;
    int target;
    cin >> tam >> target;

    map<int, int> num_indices;
    
    for(int i = 0; i < tam; i++){
        int num;
        cin >> num;

        int complemento = target - num;

        if(num_indices.count(complemento)){
            cout << i + 1 << ' ' << num_indices[target - num] + 1 << '\n';
            return 0; 
        }
        num_indices[num] = i;
    }
    cout << "IMPOSSIBLE" << '\n';
    
    return 0;
}