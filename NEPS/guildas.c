#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000

int parent[MAX_N + 1];
long long int power[MAX_N + 1];
int rank[MAX_N + 1];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]); // Compressão de Caminho
    }
    return parent[x];
}

void unionByRank(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    
    if (rootX != rootY) {
        // União por Rank
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
            power[rootX] += power[rootY];
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
            power[rootY] += power[rootX];
        } else {
            parent[rootY] = rootX;
            power[rootX] += power[rootY];
            rank[rootX]++;
        }
    }
}

int batalha(int p1, int p2) {
    int rootP1 = find(p1);
    int rootP2 = find(p2);
    
    if (power[rootP1] > power[rootP2]) {
        return (rootP1 == find(1)) ? 1 : 0;
    } else if (power[rootP1] < power[rootP2]) {
        return (rootP2 == find(1)) ? 1 : 0;
    } else {
        return 0;
    }
}

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) == 2) {
        if (n == 0 && m == 0) break;
        
        init(n);
        
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &power[i]);
        }
        
        int contador = 0;
        
        for (int i = 0; i < m; i++) {
            int acao, jogador1, jogador2;
            scanf("%d %d %d", &acao, &jogador1, &jogador2);
            if (acao == 1) {
                unionByRank(jogador1, jogador2);
            } else if (acao == 2) {
                contador += batalha(jogador1, jogador2);
            }
        }
        
        printf("%d\n", contador);
    }
    
    return 0;
}
