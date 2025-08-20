#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,aux=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        aux++;
        int num;
        cin >> num;
        int team[num] = {0};
        for(int j = 0;j<num;j++){
            cin >> team[j];
        }
        sort(team,team+num);

        cout << "Case " << aux << ": " << team[num/2] << "\n"; 
    }
    return 0;
}