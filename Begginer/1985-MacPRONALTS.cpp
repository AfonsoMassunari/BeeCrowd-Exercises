#include <stdio.h>
 
int main() {

    int n,p;
    float value = 0,valueF=0,q;

    scanf("%i",&n);
    while(n--){
        scanf("%i %f",&p,&q);

        switch(p){
            case 1001:
                value = 1.5;
                break;
            case 1002:
                value = 2.5;
                break;
            case 1003:
                value = 3.5;
                break;
            case 1004:
                value = 4.5;
                break;
            case 1005:
                value = 5.5;
                break; 
            default:
                break;      
        }
        valueF += q*value;
    }
    
    printf("%.2f\n",valueF);
    return 0;
}