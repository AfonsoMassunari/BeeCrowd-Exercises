#include <stdio.h>
 
int main() {
   int n;
   
   scanf("%d",&n);
   
   printf("%i ano(s)\n",n/365);
   n = n%365;
   printf("%i mes(es)\n",n/30);
   n = n%30;
   printf("%i dia(s)\n",n);
 
    return 0;
}