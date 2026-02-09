#include <bits/stdc++.h>
using namespace std;
using ll = long long;


//  PARA SABER SE DUAS CASAS ESTÃO NA MESMA DIAGONAL É SÓ FAZER abs(x1 - x2) == abs(y1 - y2)
bool VerificaDiagonal1(int x1,int y1,int x2,int y2){
    int x1_ = x1;
    int y1_ = y1;
    while(x1_<= 8 && y1_ <= 8){
        if(x1_ == x2 && y1_ == y2){
            return true;
        }
        x1_++;
        y1_++;
    }
    while(x1 >= 1 && y1 >= 1){
        if(x1 == x2 && y1 == y2){
            return true;
        }
        x1--;
        y1--;
    }
    return false;
}
bool VerificaDiagonal2(int x1,int y1,int x2,int y2){
    int x1_ = x1;
    int y1_ = y1;
    while(x1_<= 8 && y1_ >=1){
        if(x1_ == x2 && y1_ == y2){
            return true;
        }
        x1_++;
        y1_--;
    }
    while(x1 >= 1 && y1 <= 8){
        if(x1 == x2 && y1 == y2){
            return true;
        }
        x1--;
        y1++;
    }
    return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x1,y1,x2,y2;
    while(cin >> x1 >> y1 >> x2 >>y2 &&(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)){
        if(x1 == x2 && y1 == y2){
            cout << 0 << '\n';
        }
        //else if(abs(x1 - x2) == abs(y1 - y2) || x1 == x2 || y1 == y2){
        else if(VerificaDiagonal1(x1,y1,x2,y2) || VerificaDiagonal2(x1,y1,x2,y2) || x1 == x2 || y1 == y2){
            cout << 1 << '\n';
        }else{
            cout << 2 << '\n';
        }
    }
    return 0;
}