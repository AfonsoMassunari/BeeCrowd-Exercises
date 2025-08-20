#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin >> n){
        if(n==0)break;
        int squares = 0;

        for(int i=1;i<=n;i++){
            squares += i*i;
        }

        cout << squares << endl;
    }

    return 0;
}