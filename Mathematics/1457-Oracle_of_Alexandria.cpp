#include <stdio.h>
#include <string.h>

int main(){
    
    int N,K,T;
    scanf("%i",&T);
    while(T--){
        long long int result=1;
        char exclamation[21];
        scanf("%i%s",&N,&exclamation);
        K = strlen(exclamation);
        for(int i=0;i<=N;i++){
            if((N-i*K)>0)
                result = (N-i*K)*result;
        }

        printf("%lli\n",result);
    }

    return 0;
}