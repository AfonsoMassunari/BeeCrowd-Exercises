#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,a3;

    cin >> a1 >> a2 >> a3;

    int time1Floor = a2 + 2*a3;
    int time2Floor = a1 + a3;
    int time3Floor = a1*2 + a2;

    int minTime = min({time1Floor,time2Floor,time3Floor});

    cout << 2*minTime << "\n";

    return 0;
}