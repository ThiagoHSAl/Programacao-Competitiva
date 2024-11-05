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
#define MAX 1000

bool vis[MAX][MAX];
char grid[MAX][MAX];
int tempo[MAX][MAX];
int h,l;

vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};
 
bool casa_valida(pair<int,int> casa) {
    return casa.f >= 0 && casa.f < h && casa.s >= 0 && casa.s < l && grid[casa.f][casa.s] != '#' && !vis[casa.f][casa.s];
}

bool saida(pair<int,int> casa){
    return casa.f == 0 || casa.f == h-1 || casa.s == 0 || casa.s == l-1;
}

void bfs_fogo(vector<pair<int,int>> &focos){
    memset(vis, false, sizeof vis);
    memset(tempo, INF, sizeof tempo);
    
    queue<pair<int,int>> q;
    for(auto foco : focos){
        q.push(foco);
        vis[foco.f][foco.s]=true;
        tempo[foco.f][foco.s]=0;
    }

    while (!q.empty()) {
        pair<int,int> casa_atual = q.front();
        q.pop();
 
        for (auto movimento : moves) {
            int destino_x = casa_atual.f + movimento.f;
            int destino_y = casa_atual.s + movimento.s;
 
            if(casa_valida({destino_x, destino_y})){
                    q.push({destino_x, destino_y});
                    vis[destino_x][destino_y] = true;
                    tempo[destino_x][destino_y]=tempo[casa_atual.f][casa_atual.s]+1;                    
            }
        }
    }
}

int bfs_personagem (pair<int,int> inicio){
    memset(vis, false, sizeof vis);
    
    queue<pair<int,int>> q;
    q.push(inicio);
    vis[inicio.f][inicio.s]=true;
    tempo[inicio.f][inicio.s]=0;

    while (!q.empty()){
        pair<int,int> casa_atual = q.front();
        q.pop();

        if(saida({casa_atual.f, casa_atual.s})){
            return tempo[casa_atual.f][casa_atual.s]+1;
        }       
 
        for (auto movimento : moves) {
            int destino_x = casa_atual.f + movimento.f;
            int destino_y = casa_atual.s + movimento.s;
 
            if(casa_valida({destino_x, destino_y}) && tempo[casa_atual.f][casa_atual.s]+1 < tempo[destino_x][destino_y]){
                    q.push({destino_x, destino_y});
                    vis[destino_x][destino_y] = true;
                    tempo[destino_x][destino_y]=tempo[casa_atual.f][casa_atual.s]+1;
            }
        }
    }
    return -1;
}
 
int main() {_
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> focos;
        pair<int,int> inicio;
        int ans;
     
        cin>>l>>h;
        for (int i = 0; i < h; i++){
            for (int j = 0; j < l; j++){
                cin>>grid[i][j];
                if(grid[i][j] == '@'){
                    inicio={i,j};
                }
                if(grid[i][j] == '*'){
                    focos.pb({i,j});
                }
            }
        }
     
        bfs_fogo(focos);
        ans=bfs_personagem(inicio);

        if(ans != -1){
            cout << ans << endl;
        }
        else{
            cout << "IMPOSSIBLE" << endl;
        }
    }
}  
 
