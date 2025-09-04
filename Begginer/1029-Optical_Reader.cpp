#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
      if(n == 0) break;
        for(int i=0;i<n;i++){
            int flag = 0,letter[5];
            for(int j=0;j<5;j++){
                cin >> letter[j];
                if(letter[j]<128)
                    flag++;
            }
            
                if(flag!=1)
                    printf("*\n");
                else{
                    if(letter[0]<128)
                    printf("A\n");
                    if(letter[1]<128)
                        printf("B\n");
                    if(letter[2]<128)
                        printf("C\n");
                    if(letter[3]<128)
                        printf("D\n");
                    if(letter[4]<128)
                        printf("E\n");
                }

        }
    }
    return 0;
}
