#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> jewelrySet;  // Usamos um set para armazenar joias distintas
    string jewel;

    // Lemos até o final da entrada
    while (getline(cin, jewel)) {
        jewelrySet.insert(jewel);  // Adiciona a joia ao set (elementos duplicados não são inseridos)
    }

    // O tamanho do set representa a quantidade de joias distintas
    cout << jewelrySet.size() << endl;

    return 0;
}