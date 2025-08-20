#include <bits/stdc++.h>
using namespace std;

// Função para calcular MDC (usando algoritmo de Euclides)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        string S1, S2;
        cin >> S1 >> S2;

        // Converter de binário para decimal
        int num1 = stoi(S1, nullptr, 2);
        int num2 = stoi(S2, nullptr, 2);

        // Calcular o MDC
        int g = gcd(num1, num2);

        // Verificar se o MDC é maior que 1
        if (g > 1) {
            cout << "Pair #" << i << ": All you need is love!" << endl;
        } else {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
        }
    }

    return 0;
}
