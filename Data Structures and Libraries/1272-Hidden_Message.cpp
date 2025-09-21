#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    cin.ignore();
    while(n--){
        char txt[51];    
        cin.getline(txt,51);
        int length;
        length = strlen(txt);
        if(txt[0]>= 'a' && txt[0]<= 'z')
            cout << txt[0];
        for(int i = 1;i<length;i++){
            if(txt[i]>= 'a' && txt[i]<= 'z'){
                if(txt[i-1] < 'a' || txt[i-1] > 'z'){
                    cout << txt[i];
                }
            }
        }
        cout << "\n";
    }
    return 0;
}