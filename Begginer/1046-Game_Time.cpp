#include <stdio.h>

int main(){
    int d1,d2,t;
    scanf("%d %d",&d1, &d2);
    if(d1>=d2)
        t = 24 - d1 + d2;
    else if(d2>d1)
        t = d2 - d1;
    
    printf("O JOGO DUROU %d HORA(S)\n",t);
    return 0;
}
