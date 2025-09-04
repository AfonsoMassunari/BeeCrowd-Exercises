#include <bits/stdc++.h>
using namespace std;
int main(){

    string c1,c2,c3;

    cin >> c1;
    cin >> c2;
    cin >> c3;

    if(c1 == "vertebrado"){
        if(c2 == "ave"){
            if(c3 == "carnivoro"){
                cout << "aguia\n";
            }
            if(c3 == "onivoro"){
                cout << "pomba\n";
            }
        }
        
        if(c2 == "mamifero"){
            if(c3 == "onivoro"){
                cout << "homem\n";
            }
            if(c3 == "herbivoro"){
                cout << "vaca\n";
            }
        }
    }

    if(c1 == "invertebrado"){
        if(c2 == "inseto"){
            if(c3 == "hematofago"){
                cout << "pulga\n";
            }
            if(c3 == "herbivoro"){
                cout << "lagarta\n";
            }
        }
        
        if(c2 == "anelideo"){
            if(c3 == "hematofago"){
                cout << "sanguessuga\n";
            }
            if(c3 == "onivoro"){
                cout << "minhoca\n";
            }
        }
    }



    return 0;
}