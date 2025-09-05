#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

bool isStronglyConnected(int N, vector<vector<int>>& graph) {
    // Step 1: Check if all nodes are reachable from the first node (1)
    vector<bool> visited(N + 1, false);
    dfs(1, graph, visited);
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) return false; // Not all nodes are reachable
    }

    // Step 2: Reverse the graph
    vector<vector<int>> reverseGraph(N + 1);
    for (int v = 1; v <= N; ++v) {
        for (int w : graph[v]) {
            reverseGraph[w].push_back(v); // Reverse the direction
        }
    }

    // Step 3: Check if all nodes are reachable in the reversed graph
    visited.assign(N + 1, false);
    dfs(1, reverseGraph, visited);
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) return false; // Not all nodes are reachable in reverse
    }

    return true; // The graph is strongly connected
}

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;
        if (N == 0 && M == 0) break;

        vector<vector<int>> graph(N + 1);

        // Reading the edges
        for (int i = 0; i < M; ++i) {
            int V, W, P;
            cin >> V >> W >> P;
            graph[V].push_back(W);
            if (P == 2) {
                graph[W].push_back(V); // Two-way street
            }
        }

        // Check for strong connectivity
        cout << (isStronglyConnected(N, graph) ? 1 : 0) << endl;
    }

    return 0;
}