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
 
#define MAX 2e5+10
vector<vector<int>> g(MAX);
vector<bool> selected(MAX);
vector<bool> vis(MAX);
int ans;
 
void dfs(int n){
   if(selected[n])
   ans++;
   vis[n]=true;
   for(auto u : g[n]){
    if(!vis[u]){
      selected[u] = !selected[n];
      dfs(u);
    }
   }
}
 
 int main(){_
   int t;
   cin>>t;
   while(t--){
    ans=0;
    int n,m,i,a,b;
    cin>>n>>m;
    for(i=0;i<n;i++){
      g[i].clear();
      vis[i]=false;
      selected[i]=false;
    }
    for(i=0;i<m;i++){
      cin>>a>>b;
      a--;
      b--;
      g[a].pb(b);
      g[b].pb(a);
    }
    dfs(0);
    if(ans<=n/2){
     cout<<ans<<endl;
     for(i=0;i<n;i++){
     if(selected[i])
     cout<<i+1<<" ";
    }
    }
    else{
      cout<<n-ans<<endl;
      for(i=0;i<n;i++){
        if(!selected[i])
        cout<<i+1<<" ";
      }
    }
    cout<<endl;
   }
  return 0;
 }
