#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, N;
    int caseNumber = 1;

    while (cin >> R >> N) {
        if (R == 0 && N == 0) break;

        int maxStreets = N * 27;

        if (R > maxStreets) {
            cout << "Case " << caseNumber << ": impossible" << endl;
        } else {
            int remainingStreets = R - N;

            if (remainingStreets <= 0) {
                cout << "Case " << caseNumber << ": 0" << endl;
            } else {
                int suffixes = ceil((double)remainingStreets / N);

                if (suffixes > 26) {
                    cout << "Case " << caseNumber << ": impossible" << endl;
                } else {
                    cout << "Case " << caseNumber << ": " << suffixes << endl;
                }
            }
        }

        caseNumber++;
    }

    return 0;
}
