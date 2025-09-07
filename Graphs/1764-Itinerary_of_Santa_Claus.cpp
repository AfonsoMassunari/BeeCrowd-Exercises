#include <bits/stdc++.h>
using namespace std;

// Estrutura para representar uma aresta
struct Edge {
    int u, v, w; // vértices e peso
    bool operator<(const Edge& other) const {
        return w < other.w; // Ordenar pelo peso
    }
};

vector<int> parent, rank_;

// Função para encontrar o representante de um conjunto (com path compression)
int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

// Função para unir dois conjuntos (com union by rank)
bool unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return false; // Já estão no mesmo conjunto
    if (rank_[x] < rank_[y]) swap(x, y);
    parent[y] = x;
    if (rank_[x] == rank_[y]) rank_[x]++;
    return true;
}

int main() {
    int M, N;
    while (cin >> M >> N, M || N) {
        vector<Edge> edges(N);

        // Ler as arestas
        for (int i = 0; i < N; i++) {
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        }

        // Ordenar as arestas por peso
        sort(edges.begin(), edges.end());

        // Inicializar estruturas de Union-Find
        parent.resize(M);
        rank_.assign(M, 0);
        for (int i = 0; i < M; i++) parent[i] = i;

        // Construir a MST usando Kruskal
        int mst_cost = 0, edges_used = 0;
        for (const auto& edge : edges) {
            if (unite(edge.u, edge.v)) {
                mst_cost += edge.w;
                edges_used++;
                if (edges_used == M - 1) break; // MST completa
            }
        }

        // Imprimir o custo total da MST
        cout << mst_cost << endl;
    }

    return 0;
}
