#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    int h,z,l;
    scanf("%i %i %i",&h,&z,&l);

    int n[3] = {h,z,l};

    sort(n,n+3);

    if(n[1] == l)
        printf("luisinho\n");
    else if(n[1] == z)
        printf("zezinho\n");
    else
        printf("huguinho\n");

    return 0;
}
