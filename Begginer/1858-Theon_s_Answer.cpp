#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,aux=1000,it=0;
    cin >> n;
    int torturer;
    for(int i=1;i<=n;i++){
        cin >> torturer;

        if(aux > torturer){
            aux = torturer;
            it = i;
        }
    }

    cout << it << "\n";

    return 0;
}