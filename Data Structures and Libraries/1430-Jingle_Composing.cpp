#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string line;
    
    while (true) {
        getline(cin, line);  
        
        if (line == "*") break;  
        
        vector<float> duration;  
        float currentDuration = 0.0;
        
        for (char c : line) {
            if (c == 'W') {
                currentDuration += 1.0;
            } 
            else if (c == 'H') {
                currentDuration += 1.0 / 2.0;
            } 
            else if (c == 'Q') {
                currentDuration += 1.0 / 4.0;
            } 
            else if (c == 'E') {
                currentDuration += 1.0 / 8.0;
            } 
            else if (c == 'S') {
                currentDuration += 1.0 / 16.0;
            } 
            else if (c == 'T') {
                currentDuration += 1.0 / 32.0;
            } 
            else if (c == 'X') {
                currentDuration += 1.0 / 64.0;
            } 
            else if (c == '/') {
                if (currentDuration > 0) {
                    duration.push_back(currentDuration);
                    currentDuration = 0.0;  
                }
            }
        }
        
        int validMeasures = 0; 
        
        for (float d : duration) {
            if (d == 1.0) {
                validMeasures++;
            }
        }
        
        cout << validMeasures << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string line;
    
//     // Durações das notas
//     map<char, float> noteDuration = {
//         {'W', 1.0},
//         {'H', 1.0 / 2},
//         {'Q', 1.0 / 4},
//         {'E', 1.0 / 8},
//         {'S', 1.0 / 16},
//         {'T', 1.0 / 32},
//         {'X', 1.0 / 64}
//     };
    
//     while (true) {
//         getline(cin, line);  // Ler a linha de entrada
        
//         if (line == "*") break;  // Condição de parada
        
//         vector<float> duration;  // Vetor para armazenar a soma das durações de cada compasso
//         float currentDuration = 0.0;
        
//         // Iterar sobre cada caractere da linha
//         for (char c : line) {
//             if (isalpha(c)) {
//                 // Adicionar a duração da nota atual ao compasso atual
//                 currentDuration += noteDuration[c];
//             } else if (c == '/') {
//                 // Quando encontrar uma barra '/', adiciona a soma do compasso ao vetor
//                 if (currentDuration > 0) {
//                     duration.push_back(currentDuration);
//                     currentDuration = 0.0;  // Reiniciar a soma para o próximo compasso
//                 }
//             }
//         }
        
//         int validMeasures = 0;  // Contar os compassos válidos (com duração exata de 1)
        
//         // Contar os compassos cuja duração seja exatamente 1
//         for (float d : duration) {
//             if (d == 1.0) {
//                 validMeasures++;
//             }
//         }
        
//         cout << validMeasures << endl;
//     }

//     return 0;
// }
