#include <stdio.h>


int main(){
    
    int integer,aux1,aux2;
    double N;
    scanf("%lf",&N);
    integer = N;
    
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n",integer/100);
    aux1 = (integer%100);
    printf("%i nota(s) de R$ 50.00\n",aux1/50);
    aux1 = (aux1%50);
    printf("%i nota(s) de R$ 20.00\n",aux1/20);
    aux1 = (aux1%20);
    printf("%i nota(s) de R$ 10.00\n",aux1/10);
    aux1 = (aux1%10);
    printf("%i nota(s) de R$ 5.00\n",aux1/5);
    aux1 = (aux1%5);
    printf("%i nota(s) de R$ 2.00\n",aux1/2);
    aux1 = (aux1%2);

    N = N*100;
    aux2 = N;
    aux2 = (aux2%100);

    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n",aux1);

    printf("%i moeda(s) de R$ 0.50\n",aux2/50);
    aux2 = (aux2%50);
    printf("%i moeda(s) de R$ 0.25\n",aux2/25);
    aux2 = (aux2%25);
    printf("%i moeda(s) de R$ 0.10\n",aux2/10);
    aux2 = (aux2%10);
    printf("%i moeda(s) de R$ 0.05\n",aux2/5);
    aux2 = (aux2%5);
    printf("%i moeda(s) de R$ 0.01\n",aux2);

    return 0;
}