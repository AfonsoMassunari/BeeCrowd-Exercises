#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    cin >> N;

    while (N--) {
        int x, y;
        cin >> x >> y;
        
        int rafael = (3 * x) * (3 * x) + y * y; 
        int beto = 2 * (x * x) + (5 * y) * (5 * y); 
        int carlos = -100 * x + y * y * y; 

        if (rafael > beto && rafael > carlos) {
            cout << "Rafael ganhou" << endl;
        } else if (beto > rafael && beto > carlos) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }
    }

    return 0;
}
