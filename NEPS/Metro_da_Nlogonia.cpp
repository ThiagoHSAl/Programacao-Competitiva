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
 
#define MAX 1e5+10
vector<vector<int>> g1(MAX);
vector<vector<int>> g2(MAX);
vector<bool> vis(MAX);
vector<int> dist(MAX,-1);
vector<int> pai(MAX);
void dfs(int n, const vector<vector<int>> &g){
   vis[n]=true;
   for(auto u : g[n]){
    if(!vis[u]){
      pai[u]=n;
      dist[u]=dist[n]+1;
       dfs(u,g);
       
    }  
   }
}
vector<int> path(int v){
  vector<int> retorno;
  if(!vis[v])
  return retorno;
  retorno.pb(v);
  while(v!= pai[v]){
    v=pai[v];
    retorno.pb(v);
  }
  return retorno;
}
 int main(){_
    int n,m,i,a,b;
    cin>>n>>m;
    for(i=0;i<n-1;i++){
      cin>>a>>b;
      a--;
      b--;
      g1[a].pb(b);
      g1[b].pb(a);
    }
    for(i=0;i<m-1;i++){
      cin>>a>>b;
      a--;
      b--;
      g2[a].pb(b);
      g2[b].pb(a);
    }
    dist[0]=0;
    dfs(0,g1);
    int pos=-1,distmax=-1;
    for(i=0;i<n;i++)
      if(dist[i]>distmax){
        pos=i;
        distmax=dist[i];
      }
   pai[pos]=pos;
   distmax=-1;
   dist.assign(MAX,-1);
   vis.assign(MAX, false);
   dist[pos]=0;   
   dfs(pos,g1);
   pos=-1;
   for(i=0;i<n;i++)
      if(dist[i]>distmax){
        pos=i;
        distmax=dist[i];
      }
  vector<int> diametro1=path(pos);
  dist.assign(MAX,-1);
  vis.assign(MAX, false);
  dist[0]=0; 
  dfs(0,g2);
    pos=-1,distmax=-1;
    for(i=0;i<m;i++)
      if(dist[i]>distmax){
        pos=i;
        distmax=dist[i];
      }
   pai[pos]=pos;
   distmax=-1;
   dist.assign(MAX,-1);
   vis.assign(MAX, false);
   dist[pos]=0;   
   dfs(pos,g2);
   pos=-1;
   for(i=0;i<m;i++)
      if(dist[i]>distmax){
        pos=i;
        distmax=dist[i];
      }
  vector<int> diametro2=path(pos);
  cout<<diametro1[diametro1.size()/2]+1<<" "<<diametro2[diametro2.size()/2]+1;
  return 0;
 }
