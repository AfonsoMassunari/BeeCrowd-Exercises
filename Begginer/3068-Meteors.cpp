#include <bits/stdc++.h>

int main(){
    int X1,Y1,X2,Y2,teste=0;
    while(1){
        teste++;
        int n,quantity=0,x,y;
        scanf("%i %i %i %i",&X1,&Y1,&X2,&Y2);

        if(!(X1||Y1||X2||Y2)) break;

        scanf("%i",&n);

        while(n--){
            scanf("%i %i",&x,&y);

            if(x>=X1 && x<=X2 &&  Y1>=y && y>=Y2)
                quantity++;
        }

        printf("Teste %i\n",teste);
        printf("%i\n",quantity);

    }


    return 0;
}
