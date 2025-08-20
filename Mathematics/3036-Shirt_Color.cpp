#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double c = 3e8;         // Speed of light in m/s
    const double lambda = 700;    // Original wavelength in nm (red)
    double V;                     // Tereu's velocity

    cin >> V;

    // Calculate the observed wavelength lambda'
    double lambda_prime = lambda * sqrt((c - V) / (c + V));

    // Determine the color based on lambda_prime
    if (lambda_prime < 400) {
        cout << "invisivel" << endl;
    } else if (lambda_prime < 425) {
        cout << "violeta" << endl;
    } else if (lambda_prime < 445) {
        cout << "anil" << endl;
    } else if (lambda_prime < 500) {
        cout << "azul" << endl;
    } else if (lambda_prime < 575) {
        cout << "verde" << endl;
    } else if (lambda_prime < 585) {
        cout << "amarelo" << endl;
    } else if (lambda_prime < 620) {
        cout << "laranja" << endl;
    } else if (lambda_prime < 750) {
        cout << "vermelho" << endl;
    } else {
        cout << "invisivel" << endl;
    }

    return 0;
}
