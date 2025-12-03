#include <bits/stdc++.h>
int main(){
    float entrada;
    int pos = 0;
    for (int i = 0; i < 6;i++){
        std::cin>>entrada;
        if (entrada > 0){
            pos += 1;
        }
    }
    std::cout<<pos<<" valores positivos"<<std::endl;
    return 0;
}
