#include <bits/stdc++.h>
using namespace std;

// Estrutura para armazenar os dados de uma rena
struct Reindeer {
    string name;
    int weight, age;
    double height;

    // Operador para definir os critérios de ordenação
    bool operator<(const Reindeer& other) const {
        if (weight != other.weight)
            return weight > other.weight; // Maior peso primeiro
        if (age != other.age)
            return age < other.age; // Menor idade primeiro
        if (height != other.height)
            return height < other.height; // Menor altura primeiro
        return name < other.name; // Ordem lexicográfica
    }
};

int main() {
    int T; // Número de casos de teste
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N, M; // Número total de renas e número de renas que puxarão o trenó
        cin >> N >> M;

        vector<Reindeer> reindeers(N);

        // Ler os dados de cada rena
        for (int i = 0; i < N; i++) {
            cin >> reindeers[i].name >> reindeers[i].weight >> reindeers[i].age >> reindeers[i].height;
        }

        // Ordenar as renas de acordo com os critérios
        sort(reindeers.begin(), reindeers.end());

        // Exibir o cenário
        cout << "CENARIO {" << t << "}" << endl;
        for (int i = 0; i < M; i++) {
            cout << i + 1 << " - " << reindeers[i].name << endl;
        }
    }

    return 0;
}
