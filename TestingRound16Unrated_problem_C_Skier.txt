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
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;
 
int main()
{_
    int n, i, j, tempo;
    string caminho;
    pair<int, int> coordenada_passada,coordenada_atual;
    pair<pair<int,int>,pair<int,int>> segmento,segmento_reverso;
    set<pair<pair<int, int>,pair<int,int>>> rota;
 
    cin >> n;
 
    for (i = 0; i < n; i++) {
        coordenada_passada = {0, 0};
        coordenada_atual = {0, 0};
        segmento={coordenada_passada,coordenada_atual};  // Resetando as coordenadas para a origem
        rota.clear();
        rota.insert(segmento);
        tempo = 0;
        cin >> caminho;
 
        for (j = 0; j < caminho.length(); j++) {
            if (caminho[j] == 'W')
                coordenada_atual.first++;
            if (caminho[j] == 'E')
                coordenada_atual.first--;
            if (caminho[j] == 'N')
                coordenada_atual.second++;
            if (caminho[j] == 'S')
                coordenada_atual.second--;
            segmento={coordenada_passada,coordenada_atual};
            segmento_reverso={coordenada_atual,coordenada_passada};
 
            // Verifica se a coordenada já foi visitada
            if (!rota.count(segmento)&&!rota.count(segmento_reverso))
            {
                rota.insert(segmento);
                rota.insert(segmento_reverso);  // Marca como visitada
                tempo += 5;
            } else {
                tempo += 1;
            }
            coordenada_passada=coordenada_atual;
        }
 
        cout << tempo << endl;
    }
 
    return 0;
}