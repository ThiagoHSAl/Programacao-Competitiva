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

#define MAX 1e6+10



int bfs(vector<int> soldiers, vector<int> &forca, vector<int> &protegido, vector<vector<int>> &g, vector<int> &distancia){
    queue <int> q;

    for(auto inicio : soldiers){
        q.push(inicio);
        distancia[inicio]=0;
        protegido[inicio]=inicio;
    }
    
    while (!q.empty()) {
        int vertice_atual = q.front();  
        q.pop();

        for (auto protecao : g[vertice_atual]){
            forca[protecao]=forca[vertice_atual];
            
            if(protegido[protecao] != protegido[vertice_atual]){
                distancia[protecao] = distancia[vertice_atual]+1;

                if(distancia[protecao] > forca[vertice_atual]){
                    break;
                }

                if(protegido[protecao] != -1){
                        return -1;
                }

                q.push(protecao);
                protegido[protecao]=protegido[vertice_atual];
            }      
        }
    }
    return 1;
}


 
int main() {_
    int t;
    cin>>t;
    while(t--){
        int n,r,m,ans;

        cin>>n>>r>>m;

        vector<int> forca(n, -1);
        vector<int> protegido(n, -1);
        vector<vector<int>> g(n);
        vector<int> soldiers;
        vector<int> distancia(n, -1);
        
        for(int i=0; i<r; i++){
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            g[a].pb(b);
            g[b].pb(a);
        }

        for(int i=0; i<m; i++){
            int a,b;
            cin>>a>>b;
            a--;
            forca[a]=b;
            soldiers.pb(a);
        }
        
        ans=bfs(soldiers, forca, protegido, g, distancia);
        
        if(ans != -1){
            for(int i=0; i<n; i++){
                if(protegido[i] == -1){
                    ans=-1;
                    break; 
                }
            }
        }  

        cout<<(ans == 1 ? "Yes" : "No")<<endl;
    }
}  
 
