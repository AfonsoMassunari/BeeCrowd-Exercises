#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(const char* hex) {
    int length = 0, decimalValue = 0;

    while (hex[length] != '\0') length++;

    for (int i = 2; i < length; i++) {
        char ch = hex[i];
        int value;

        if (ch >= '0' && ch <= '9') {
            value = ch - '0'; 
        } else if (ch >= 'A' && ch <= 'F') {
            value = ch - 'A' + 10; 
        } else if (ch >= 'a' && ch <= 'f') { 
            value = ch - 'a' + 10;
        } else {
            continue;
        }

        decimalValue = decimalValue * 16 + value;
    }
    return decimalValue;
}

void decimalToHex(int decimal) {
    char hex[20]; 
    int index = 0;

    do {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex[index++] = '0' + remainder; 
        } else {
            hex[index++] = 'A' + (remainder - 10);
        }
        decimal /= 16;
    } while (decimal > 0);

    cout << "0x";

    for (int i = index - 1; i >= 0; i--) {
        cout << hex[i];
    }
    cout << endl;
}

int main() {
    char input[20]; 
    while (cin >> input) {
        if (input[0] == '-' && input[1] == '1') {
            break;
        }

        if (input[0] == '0' && input[1] == 'x') {
            int decimalValue = hexToDecimal(input);
            cout << decimalValue << endl;
        } else {
            int decimalValue = 0;
            
            for (int i = 0; input[i] != '\0'; i++) {
                decimalValue = decimalValue * 10 + (input[i] - '0');
            }

            decimalToHex(decimalValue);
        }
    }

    return 0;
}

// #include <iostream>
// #include <sstream> // Para manipular strings
// #include <cctype>  // Para funções de manipulação de caracteres
// using namespace std;

// int main() {
//     string input;
    
//     while (cin >> input) {
//         // Verificar se é o número de término
//         if (input[0] == '-' && isdigit(input[1])) {
//             break;
//         }

//         if (input.size() > 2 && input[0] == '0' && input[1] == 'x') {
//             // Número hexadecimal -> Converter para decimal
//             int decimalValue;
//             stringstream ss;
//             ss << hex << input.substr(2); // Remover "0x"
//             ss >> decimalValue;
//             cout << decimalValue << endl;
//         } else {
//             // Número decimal -> Converter para hexadecimal
//             int decimalValue = stoi(input); // Converter para inteiro decimal
//             cout << "0x" << uppercase << hex << decimalValue << endl;
//         }
//     }

//     return 0;
// }
