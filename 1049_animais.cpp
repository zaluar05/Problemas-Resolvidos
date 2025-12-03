#include <bits/stdc++.h>
using namespace std;
int main(){
    string palavra1,palavra2,palavra3;
    cin>>palavra1>>palavra2>>palavra3;
    
    if (palavra1 == "vertebrado"){
        if(palavra2 == "ave"){
            if(palavra3 == "carnivoro"){
                cout<<"aguia"<<endl;
            }else 
            cout<<"pomba"<<endl;
        }else
            if (palavra2 == "mamifero"){
                if(palavra3 == "onivoro"){
                cout<<"homem"<<endl;
                }else   
                cout<<"vaca"<<endl;
            }
    }else
        if (palavra2 == "inseto"){
            if (palavra3 ==  "herbivoro"){
                cout<<"lagarta"<<endl;
            }else 
                cout<<"pulga"<<endl;
        }else
            if(palavra3 == "hematofago"){
                cout<<"sanguessuga"<<endl;
            }else
            cout<<"minhoca"<<endl;
    return 0;
}