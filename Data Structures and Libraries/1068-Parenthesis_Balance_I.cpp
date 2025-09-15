#include <bits/stdc++.h>
using namespace std;

int main() {
    char word[1001];
    
    while (scanf("%s", word) != EOF) {  
        int flag = 0;
        int len = strlen(word);  
        
        for (int j = 0; j < len; j++) {
            if (word[j] == '(')
                flag++;  
            
            if (word[j] == ')')
                flag--;  
            
            if (flag < 0)
                break; 
        }

        if (flag != 0)  
            printf("incorrect\n");
        else
            printf("correct\n");
    }

    return 0;
}