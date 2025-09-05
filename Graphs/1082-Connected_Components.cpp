#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 26 // Máximo de vértices (a-z)

vector<int> graph[MAX]; // Grafo representado por uma lista de adjacência
bool visited[MAX]; // Array para marcar os vértices visitados

// Função para realizar a busca em profundidade (DFS)
void dfs(int v, vector<char>& component) {
    visited[v] = true;
    component.push_back(v + 'a'); // Armazena o vértice atual na componente

    // Percorre os vértices adjacentes
    for (int i : graph[v]) {
        if (!visited[i]) {
            dfs(i, component);
        }
    }
}

int main() {
    int T; // Número de casos de teste
    cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;

        // Limpa o grafo e o array de visitados
        for (int i = 0; i < MAX; i++) {
            graph[i].clear();
            visited[i] = false;
        }

        // Lê as arestas
        for (int i = 0; i < E; i++) {
            char u, v;
            cin >> u >> v;
            graph[u - 'a'].push_back(v - 'a'); // Adiciona aresta de u para v
            graph[v - 'a'].push_back(u - 'a'); // Adiciona aresta de v para u (grafo não direcionado)
        }

        vector<vector<char>> components; // Armazena os componentes conectados
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                vector<char> component;
                dfs(i, component); // Encontra a componente conectada
                sort(component.begin(), component.end()); // Ordena os vértices da componente
                components.push_back(component);
            }
        }

        // Exibe o resultado
        static int caseNumber = 1;
        cout << "Case #" << caseNumber++ << ":\n";
        for (const auto& component : components) {
            for (char c : component) {
                cout << c << ",";
            }
            cout << "\n";
        }
        cout << components.size() << " connected components\n\n"; // Exibe o número de componentes conectados
    }
    return 0;
}