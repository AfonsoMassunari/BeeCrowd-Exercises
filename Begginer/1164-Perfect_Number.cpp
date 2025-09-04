#include <stdio.h>

int main(){
    int N;
    scanf("%i",&N);

    while(N--){
        long long int X,sum=0;
        scanf("%lli",&X);
        
        for(int j=1;j<X;j++){
            if(X%j==0)
                sum += j;
        }
        

        if(X == sum)
            printf("%lli eh perfeito\n",X);
        else
            printf("%lli nao eh perfeito\n",X);

    }

    return 0;    
}