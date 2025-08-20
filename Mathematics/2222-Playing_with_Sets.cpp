#include <bits/stdc++.h>
using namespace std;

int intersection_size(const unordered_set<int>& set1, const unordered_set<int>& set2) {
    const unordered_set<int>& smaller = (set1.size() < set2.size()) ? set1 : set2;
    const unordered_set<int>& larger = (set1.size() < set2.size()) ? set2 : set1;
    
    int count = 0;
    for (int element : smaller) {
        if (larger.count(element)) {
            count++;
        }
    }
    return count;
}


int union_size(const unordered_set<int>& set1, const unordered_set<int>& set2) {
    unordered_set<int> result = set1;  
    for (int element : set2) {
        result.insert(element);  
    }
    return result.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N;
        
        vector<unordered_set<int>> sets(N + 1); 

        for (int i = 1; i <= N; i++) {
            int Mi;
            cin >> Mi;
            for (int j = 0; j < Mi; j++) {
                int elem;
                cin >> elem;
                sets[i].insert(elem);
            }
        }
        
        int Q;
        cin >> Q; 
        
        for (int i = 0; i < Q; i++) {
            int op, X, Y;
            cin >> op >> X >> Y;
            if (op == 1) {
                cout << intersection_size(sets[X], sets[Y]) << "\n";
            } else if (op == 2) {
                cout << union_size(sets[X], sets[Y]) << "\n";
            }
        }
    }

    return 0;
}
