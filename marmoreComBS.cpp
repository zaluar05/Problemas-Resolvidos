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
          if(binary_search(marmores.begin(),marmores.end(),procurados[i])){
            auto it = lower_bound(marmores.begin(), marmores.end(), procurados[i]);
            int index = distance(marmores.begin(), it);
            cout << procurados[i] << " found at " << index + 1 <<'\n';
          }else  cout << procurados[i] << " not found" << '\n';   
        }
    }
    return 0;
}