#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    while(cin >> casos){
        int pares = 0;
        string num;
        char dir;
        unordered_multiset<string> pes;
        for(int i = 0; i < casos;i++){
            cin >> num >> dir;
            if(dir == 'D'){
                string a = num + 'E';
                if(pes.count(a)){
                    pares ++;
                    pes.erase(pes.find(a));
                }else{
                    pes.insert(num + dir);
                }
            }else{
                string a = num + 'D';
                if(pes.count(a)){
                    pares ++;
                    pes.erase(pes.find(a));
                }else{
                    pes.insert(num + dir);
                }
            }
        }
        cout << pares << '\n';
    }
    return 0;
}