#include <iostream>
#include <queue>
using namespace std;

#define MAXN 11
int N, M;
int caverna[MAXN][MAXN];
bool visitado[MAXN][MAXN];

// Estrutura para armazenar posição e distância
struct Estado {
    int x, y, dist;
};

int bfs() {
    // Encontrar posição inicial
    int inicio_x = -1, inicio_y = -1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(caverna[i][j] == 3) {
                inicio_x = i;
                inicio_y = j;
                break;
            }
        }
    }
    
    // Direções: cima, direita, baixo, esquerda
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    
    queue<Estado> fila;
    fila.push({inicio_x, inicio_y, 0});
    visitado[inicio_x][inicio_y] = true;
    
    while(!fila.empty()) {
        Estado atual = fila.front();
        fila.pop();
        
        // Se encontrou saída
        if(caverna[atual.x][atual.y] == 0) {
            return atual.dist;
        }
        
        // Tentar todas as direções
        for(int i = 0; i < 4; i++) {
            int nx = atual.x + dx[i];
            int ny = atual.y + dy[i];
            
            if(nx >= 0 && nx < N && ny >= 0 && ny < M && 
               !visitado[nx][ny] && caverna[nx][ny] != 2) {
                visitado[nx][ny] = true;
                fila.push({nx, ny, atual.dist + 1});
            }
        }
    }
    return -1;
}

int main() {
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> caverna[i][j];
            visitado[i][j] = false;
        }
    }
    
    cout << bfs() << endl;
    
    return 0;
}