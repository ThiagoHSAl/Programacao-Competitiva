#include <iostream>
#include <string>
#include<sstream>
#include<fstream>
#include<bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
#define pb push_back
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;

bool vis[8][8];
int distancia[8][8];
pair<int,int> alvo;
 
vector<pair<int,int>> moves = {{1,-2}, {2,-1}, {1,2}, {2,1}, {-1,-2}, {-2,-1}, {-1,2}, {-2,1}};
 
bool casa_valida(pair<int,int> casa) {
    return casa.f >= 0 && casa.f <= 7 && casa.s >= 0 && casa.s <= 7;
}
 
void bfs(pair<int,int> inicio) {
    queue<pair<int,int>> q;
    q.push(inicio);
    vis[inicio.f][inicio.s] = true;
    distancia[inicio.f][inicio.s] = 0;
 
    while (!q.empty()) {
        pair<int,int> casa_atual = q.front();
        q.pop();
 
        for (auto jogada : moves) {
            int destino_x = casa_atual.f + jogada.f;
            int destino_y = casa_atual.s + jogada.s;
 
            if (casa_valida({destino_x, destino_y}) && !vis[destino_x][destino_y]) {
                q.push({destino_x, destino_y});
                vis[destino_x][destino_y] = true;
                distancia[destino_x][destino_y] = distancia[casa_atual.f][casa_atual.s] + 1;
 
                if (vis[alvo.f][alvo.s])
                    return;
            }
        }
    }
}
 
int main() {_
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++) {
                vis[i][j] = false;
                distancia[i][j] = 0;
            }
        
        pair<int,int> inicio; 
        string entrada;
        
        cin >> entrada;
        inicio.f = entrada[0] - 'a';  
        inicio.s = entrada[1] - '1';  
        
        cin >> entrada;
        alvo.f = entrada[0] - 'a';     
        alvo.s = entrada[1] - '1';     
        
        bfs(inicio);
        cout << distancia[alvo.f][alvo.s] << endl;
    }  
} 
