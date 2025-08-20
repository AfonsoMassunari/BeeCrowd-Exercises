#include <bits/stdc++.h>
using namespace std;

int gdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isPythagoreanTriple(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int main() {
    int x, y, z;
    while (cin >> x >> y >> z) {
        vector<int> sides = {x, y, z};
        sort(sides.begin(), sides.end());  
        int a = sides[0];
        int b = sides[1];
        int c = sides[2]; 

        if (isPythagoreanTriple(a, b, c)) {
            if (gdc(gdc(a, b),c) == 1) {
                cout << "tripla pitagorica primitiva" << endl;
            } else {
                cout << "tripla pitagorica" << endl;
            }
        } else {
            cout << "tripla" << endl;
        }
    }
    return 0;
}