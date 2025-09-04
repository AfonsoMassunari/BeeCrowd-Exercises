#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N;
    long long int A[10000],maior; 

    scanf("%i",&N);

    for(int i=0;i<N;i++){
        scanf("%lld",&A[i]);
    }

    sort(A,A+N);

    maior = A[N-1] + 1;
    
    while(1){
        int flag = 1;
        for(int i=0;i<N;i++){
            if(maior % A[i] == 0 && A[i] != 1){
                maior ++;
                flag = 0;
                break;}        
        }

        if(flag)
            break;
    } 

     printf("%lld\n", maior); 

    return 0;
}