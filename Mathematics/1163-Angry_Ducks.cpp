#include <stdio.h>
#include <math.h>

#define pi 3.14159
#define g 9.80665
 
int main() {
    double rad,target,v,a,h;
    int p1,p2,tries;
    
    while(scanf("%lf",&h) != EOF){
       
       scanf("%i %i", &p1,&p2);
       scanf("%i", &tries);
       
       while(tries--){
            scanf("%lf %lf", &a,&v); 
            rad = a*pi/180.0;
            target = v*cos(rad)*((-v*sin(rad) - sqrt((pow(v*sin(rad),2))+4.0*(g/2.0)*h))/-g) ;
            printf("%.5lf ->", target);
            if(target>p1 && target<p2)
                printf(" DUCK\n");
            else
                printf(" NUCK\n");
       }
    }  
    return 0;
}