#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,d;
    while(cin >> n >> d && (n != 0 && d != 0)){
        vector<pair<char,int>> vet(n);
        for(int i = 0; i < n;i++){
            char e;
            cin >> e;
            vet[i] = {e,i};
        }
        sort(vet.begin(),vet.end());
        vet.erase(vet.begin(),vet.begin() + d);
        sort(vet.begin(), vet.end(), [](const pair<char,int>& a, const pair<char,int>& b) {
            return a.second < b.second; 
        });
        for(auto c : vet){
            cout << c.first;
        }
        cout << '\n';
    }
    return 0;
}