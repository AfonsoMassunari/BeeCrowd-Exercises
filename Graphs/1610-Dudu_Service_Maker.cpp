#include<bits/stdc++.h>
using namespace std;


bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& recStack) {
    visited[node] = true;
    recStack[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, adj, visited, recStack)) {
                return true;
            }
        }
        else if (recStack[neighbor]) {
            return true;
        }
    }

    recStack[node] = false;
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> adj(N + 1);

        for (int i = 0; i < M; i++) {
            int A, B;
            cin >> A >> B;
            adj[A].push_back(B);
        }

        vector<bool> visited(N + 1, false);
        vector<bool> recStack(N + 1, false);

        bool hasCycle = false;
        for (int i = 1; i <= N; i++) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, recStack)) {
                    hasCycle = true;
                    break;
                }
            }
        }

        if (hasCycle) {
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
    }

    return 0;
}
