#include <stdio.h>
#include <math.h>

int main() {
    int N;
    long long int v1, v2;
    
    scanf("%i", &N);

    for (int i = 1; i <= N; i++) {
    v1 = i*i;
    v2 = i*i*i; 
    printf("%i %lld %lld\n", i, v1, v2);
    printf("%i %lld %lld\n", i, v1 + 1, v2 + 1);
    }

    return 0;
}