#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;

    if(N.find("13") != string::npos){
        cout << N << " es de Mala Suerte\n";
    }else
        cout << N << " NO es de Mala Suerte\n";
    
    return 0;
}