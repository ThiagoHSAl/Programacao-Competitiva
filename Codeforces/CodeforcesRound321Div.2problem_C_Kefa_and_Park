#include<iostream>
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
 
 
#define MAX 1e5
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<bool> cats(MAX);
vector<int> vertex_catcount(MAX);
vector<int> max_catcount(MAX,0);
int catcount=0,ans=0;
 
void dfs(int n, int m){
  if(cats[n]){
   catcount++;
   if(catcount>max_catcount[n])
    max_catcount[n]=catcount;
   }
  else
   catcount=0;
  vis[n]=true;
  vertex_catcount[n]=catcount;
  for(auto u : g[n]){
    if(!vis[u]){
      catcount=vertex_catcount[n];
      max_catcount[u]=max_catcount[n];
      dfs(u,m);
    }
  }
  if(max_catcount[n]<=m && g[n].size()==1 && n!=0)
  ans++; 
}
 int main(){_
   int m,n,i;
   bool cat;
   cin>>m>>n;
   for(i=0;i<m;i++){
      cin>>cat;
      cats[i]=cat;
   }
   int a,b;
   for(i=0;i<m-1;i++){
    cin>>a>>b;
    a--;
    b--;
    g[a].pb(b);
    g[b].pb(a);
   }
   dfs(0,n);
   cout<<ans;
 }
