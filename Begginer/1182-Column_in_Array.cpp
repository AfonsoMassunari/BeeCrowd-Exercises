#include <bits/stdc++.h>
using namespace std;

int main() {
    int column; 
    char op;    
    float m[12][12]; 
    float result = 0.0; 

    cin >> column;
    cin >> op;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        result += m[i][column];
    }

    if (op == 'M') {
        result /= 12.0;
    }

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}