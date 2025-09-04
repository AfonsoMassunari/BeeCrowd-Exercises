#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int C;
    cin >> C; 
    
    while (C--) {
        int N, M;
        cin >> N >> M;
        
        if (N == 0) {
            cout << 1 << endl; 
        } else {
            int num_digits = floor(M * log10(N)) + 1;
            cout << num_digits << endl;
        }
    }
    
    return 0;
}