#include <stdio.h>
#include <math.h>


int isPrime(int n) {
    if (n <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }
    
    if (n == 2) {
        return 1;  // 2 é primo
    }

    if (n % 2 == 0) {
        return 0;  // Números pares maiores que 2 não são primos
    }
    
    // Verificamos os divisores até a raiz quadrada de n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;  // Se n for divisível por i, então não é primo
        }
    }

    return 1;  // Se não encontrou divisor, n é primo
}

int main(){
    int N;
    long long int X;
    scanf("%i",&N);

    while(N--){ 
        scanf("%lld",&X);

         isPrime(X) ? printf("%lld eh primo\n",X) : printf("%lld nao eh primo\n",X);
    }
    
    return 0;
}