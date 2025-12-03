#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    int caso = 0;
    while(cin >> n >> q && (n != 0 && q != 0)){
        caso ++;
        vector<int> marmores;
        for(int i = 0; i < n;i++){
            int temp;
            cin >> temp;
            marmores.push_back(temp);
        }
        sort(marmores.begin(),marmores.end());
        vector<int> procurados;
        for(int i = 0; i < q;i++){
            int temp;
            cin >> temp;
            procurados.push_back(temp);
        }
        cout << "CASE# "<<caso<<":" <<endl;
        for (int i = 0; i < q; i++)
        {
            bool encontrado = false;
            for (int j = 0; j < n; j++)
            {
                if(procurados[i] == marmores[j]){
                    cout << procurados[i] << " found at " << j + 1<<'\n';
                    encontrado = true;
                    break;
                }
            }
            if(!encontrado){
                 cout << procurados[i] << " not found" << '\n';
            }
               
        }
    }
    return 0;
}