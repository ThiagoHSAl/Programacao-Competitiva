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

#define MAX 2e5
vector<vector<int>> g(MAX);
vector<bool> vis (MAX);
vector<int> pai(MAX);

void bfs(int v){
    queue <int> q;
    q.push(v);
    vis[v]=true;
    pai[v]=v;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for (auto x : g[s]){
            if(!vis[x]){
                q.push(x);
                vis[x]=true;
                pai[x]=s;
            }
        }
    }
}

vector<int> retorno(int v){
    vector<int> retorno;
    if(!vis[v]){
        return retorno;
    }
    retorno.pb(v);
    while(pai[v]!=v){
        v=pai[v];
        retorno.pb(v);
    }
    reverse(retorno.begin(),retorno.end());
    return retorno;
}

int main(){_
    int a,b,m,n;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        a--;
        b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    bfs(0);
    vector<int> caminho = retorno(n-1);
    if(caminho.size()==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<caminho.size()<<endl;
        for(int i=0; i<caminho.size(); i++){
            cout<<caminho[i]+1<<" ";
        }
    }
}
