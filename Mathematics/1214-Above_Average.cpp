#include <bits/stdc++.h>
using namespace std;

int main() {
    int C; 
    cin >> C;

    while (C--) {
        int N; 
        cin >> N;

        vector<int> grades(N);
        double sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> grades[i];
            sum += grades[i];
        }

        double average = sum / N;

        int aboveAverageCount = 0;
        for (int i = 0; i < N; i++) {
            if (grades[i] > average) {
                aboveAverageCount++;
            }
        }

        double result = (aboveAverageCount * 100.0) / N;

        cout << fixed << setprecision(3) << result << "%" << endl;
    }

    return 0;
}
