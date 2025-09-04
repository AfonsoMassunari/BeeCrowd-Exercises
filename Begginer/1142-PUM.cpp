#include <stdio.h>

int main(){

    int n,aux=1;;
    scanf("%i",&n);

    while(n--){
        printf("%i %i %i PUM\n",aux,aux+1,aux+2);
        aux+=4;
    }

    return 0;
}