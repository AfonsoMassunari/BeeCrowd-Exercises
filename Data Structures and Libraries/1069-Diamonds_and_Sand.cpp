#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        int diamonds=0,aux = 0;
        cin >> s;

        for(char c: s){
            if(c == '<')
                aux++;
            else if(c == '>' && aux > 0){
                diamonds++;
                aux--;
            }
        }

        cout << diamonds << "\n";
    }
    return 0;
}