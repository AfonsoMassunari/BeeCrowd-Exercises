#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,tabs=0;

    cin >> N >> M;

    string actions;

    tabs = N;

    for(int i=0;i<M;i++){
        cin >> actions;

        if(actions == "fechou")tabs++;
        if(actions == "clicou")tabs--;

    }

    cout << tabs << "\n";

    return 0;
}