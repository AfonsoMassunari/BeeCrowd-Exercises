#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to compute GCD of two numbers
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    while (cin >> N >> Q) {
        if (N == 0 && Q == 0) break;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        // To keep track of the lazy updates
        vector<int> lazy(N, 0); 

        // Function to apply all pending updates
        for (int i = 0; i < Q; ++i) {
            int type;
            cin >> type;
            if (type == 1) {  // Update operation (add V from A to B)
                int A, B, V;
                cin >> A >> B >> V;
                A--; B--; // Convert to 0-based index

                // Apply the update lazily in the range [A, B]
                lazy[A] += V;
                if (B + 1 < N) {
                    lazy[B + 1] -= V;
                }
            } else if (type == 2) {  // GCD query
                int A, B;
                cin >> A >> B;
                A--; B--; // Convert to 0-based index

                // Compute the effective array values by applying the lazy updates
                vector<int> updatedArr = arr;
                int runningSum = 0;
                for (int i = 0; i < N; ++i) {
                    runningSum += lazy[i];
                    updatedArr[i] += runningSum;
                }

                // Query GCD in range [A, B]
                int result = updatedArr[A];
                for (int i = A + 1; i <= B; ++i) {
                    result = gcd(result, updatedArr[i]);
                }

                // Output the result of the GCD query
                cout << result << "\n";
            }
        }
    }
    return 0;
}
