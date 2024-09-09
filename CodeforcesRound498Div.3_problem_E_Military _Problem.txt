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
 
#define MAX 2e5+10
vector<vector<int>> adj(MAX);
vector<bool> vis(MAX);
vector<int> idxstop(MAX);
vector<int> idx(MAX);
 
void dfs(int u, vector<int>& ans){
    if (!vis[u]){
        vis[u]=true;
        ans.push_back(u);
        for(auto i : adj[u]){
            dfs(i,ans);
        }
    }
    idxstop[u]=ans.size()-1;
}
 
int main()
{_
  int n,q,officer,u,k;
  vector<int> ans;
  cin>>n>>q;
  for(int i=2;i<=n;i++){
    cin>>officer;
    adj[officer].push_back(i);
  }
  dfs(1,ans);
  for(int i=0;i<ans.size();i++)
    idx[ans[i]]=i;
  for(int i=0;i<q;i++){
    cin>>u>>k;
    if(idx[u]+k-1>idxstop[u])
        cout<<"-1"<<endl;
    else
        cout<<ans[idx[u]+k-1]<<endl;
  }
}
