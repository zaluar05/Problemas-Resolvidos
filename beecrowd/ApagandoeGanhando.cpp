#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,d;
    while(cin >> n >> d && (n != 0 && d != 0)){
        string ent;
        cin >> ent;
        vector<char> st;
        for(char& c : ent){
            while(!st.empty() && d > 0 && c > st.back()){
                d--;
                st.pop_back();
            } 
            st.push_back(c);
        }
        while(d > 0){
            st.pop_back();
            d--;
        }
        for(auto c : st){
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}