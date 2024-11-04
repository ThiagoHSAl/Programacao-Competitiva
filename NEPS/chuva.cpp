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
#define MAX 4e4

bool vis[500][500];
char grid[500][500];
int h,l;

vector<pair<int,int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
 
bool casa_valida(pair<int,int> casa) {
    return casa.f >= 0 && casa.f < h && casa.s >= 0 && casa.s < l;
}

bool it_is_o (pair<int,int> casa){
    return ((casa_valida({casa.f-1, casa.s}) && grid[casa.f-1][casa.s] == 'o') || 

            (casa_valida({casa.f, casa.s-1}) && casa_valida({casa.f+1, casa.s-1}) && 

            grid[casa.f][casa.s-1] == 'o' && grid[casa.f+1][casa.s-1] == '#') || 

            (casa_valida({casa.f, casa.s+1}) && casa_valida({casa.f+1, casa.s+1}) && 

            grid[casa.f][casa.s+1] == 'o' && grid[casa.f+1][casa.s+1] == '#'));
}

void bfs(pair<int,int> inicio) {
    queue<pair<int,int>> q;
    q.push(inicio);
    vis[inicio.f][inicio.s] = true;
    while (!q.empty()) {
        pair<int,int> casa_atual = q.front();
        q.pop();
 
        for (auto movimento : moves) {
            int destino_x = casa_atual.f + movimento.f;
            int destino_y = casa_atual.s + movimento.s;
 
            if(casa_valida({destino_x, destino_y}) && !vis[destino_x][destino_y] && grid[destino_x][destino_y] == '.') {
                if(it_is_o({destino_x, destino_y})){
                     grid[destino_x][destino_y]='o';
                     q.push({destino_x, destino_y});
                    vis[destino_x][destino_y] = true;
                }
            }
        }
    }
}
 
int main() {_
    cin>>h>>l;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++){
            cin>>grid[i][j];
        }
        for(int j = 0; j < l; j++){
            if(grid[0][j]=='o'){
                bfs({0, j});
                break;
            }
        }

    for (int i=0; i < h; i++){
        for(int j = 0; j < l; j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }        
}  
 
