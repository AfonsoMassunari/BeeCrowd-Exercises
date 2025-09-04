#include <bits/stdc++.h>

int main(){
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    double triangle[3] = {a,b,c};

    std::sort(triangle,triangle+3);
    //printf("%f %f %f\n",triangle[0],triangle[1],triangle[2]);
    if(triangle[2] >= (triangle[1]+triangle[0]))
        printf("NAO FORMA TRIANGULO\n"); 
    else{ 
    if((triangle[2]*triangle[2]) == ((triangle[1]*triangle[1])+(triangle[0]*triangle[0])))
        printf("TRIANGULO RETANGULO\n");
    
    if((triangle[2]*triangle[2]) > ((triangle[1]*triangle[1])+(triangle[0]*triangle[0])))
        printf("TRIANGULO OBTUSANGULO\n");
    
    if((triangle[2]*triangle[2]) < ((triangle[1]*triangle[1])+(triangle[0]*triangle[0])))
        printf("TRIANGULO ACUTANGULO\n");
    
    if(triangle[0] == triangle[1] && triangle[1] == triangle[2])
        printf("TRIANGULO EQUILATERO\n");

    else if(triangle[0] == triangle[1] || triangle[1] == triangle[2] || triangle[0] == triangle[2]) 
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}