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
 
const int MAX = 2e5+10;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
void dfs(int v){
        vis[v]=true;
        for(auto i : g[v])
        vis[i]=true;  
                   
}
 
int main()
{_
  int m,n,i,square,minadj=INF,j,k;
  cin>>m>>n;
  for(i=0;i<n;i++){
    cin>>j>>k;
    j--;
    k--;
    g[j].push_back(k);
    g[k].push_back(j);
  }
  for(i=0;i<m;i++)
    if(g[i].size()<minadj){
        minadj=g[i].size();
        square=i;
     }   
        dfs(square);
  for(i=0;i<m;i++)
  cout<<!vis[i]<<" ";
}
