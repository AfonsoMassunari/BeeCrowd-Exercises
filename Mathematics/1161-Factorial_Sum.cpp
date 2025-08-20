#include <stdio.h>

int main(){
    int M,N;
    long long int result1 = 1,result2 = 1,resultF;
    
    while(scanf("%d %d",&M,&N) != EOF){
        for(int i=1;i<=M;i++){
            result1 = i*result1;
        }
         for(int i=1;i<=N;i++){
            result2 = i*result2;
        }
        resultF = result1+result2;
        printf("%lld\n",resultF); 
        result1 = 1;
        result2 = 1;
    }
    return 0;
}