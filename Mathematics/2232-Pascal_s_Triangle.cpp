#include <iostream>
using namespace std;

int main() {
    int T;  // number of test cases
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        // Sum of the first N rows of Pascal's Triangle is 2^N - 1
        cout << (1 << N) - 1 << endl;  // (1 << N) is equivalent to 2^N
    }
    
    return 0;
}
