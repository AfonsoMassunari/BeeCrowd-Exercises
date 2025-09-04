#include <stdio.h>
#include <math.h>

int main(){
    int t,s;
    float v;
    scanf("%d\n%d",&t, &s);
    v = s*t/12.0;
    printf("%.3f\n",v);
    return 0;
}