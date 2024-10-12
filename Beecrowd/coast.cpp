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
 
const int MAX=1e3;
char grid[MAX][MAX];
bool vis[MAX][MAX];
int m,n,ans=0;
vector<pair<int,int>> mov={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(pair<int,int> x){
  return x.f>=0 and x.f<m and x.s>=0 and x.s<n and !vis[x.f][x.s] and grid[x.f][x.s]=='#';
}

bool coast(pair<int,int> x){
  return (x.f == 0 || x.f == m - 1 || x.s == 0 || x.s == n - 1) ||
           (x.f > 0 && grid[x.f - 1][x.s] == '.') ||
           (x.f < m - 1 && grid[x.f + 1][x.s] == '.') ||
           (x.s > 0 && grid[x.f][x.s - 1] == '.') ||
           (x.s < n - 1 && grid[x.f][x.s + 1] == '.');
}

void bfs(pair<int,int> s){
  queue <pair<int,int>> q;
  q.push(s);
  vis[s.f][s.s]=true;
  while(!q.empty()){
    pair<int,int> v = q.front();
    q.pop();
    for (auto u : mov){
     u.f+=v.f;
     u.s+=v.s;
     if(valid(u)){
      q.push(u);
      vis[u.f][u.s]=true;
       if(coast(u))
       ans++;
     } 
    }     
  }
}
 int main(){_
   int i,j;
   cin>>m>>n;
   for(i=0;i<m;i++)
     for(j=0;j<n;j++)
       cin>>grid[i][j];
   for(i=0;i<m;i++)
     for(j=0;j<n;j++){
      if(valid({i,j})){
        if(coast({i,j}))
          ans++;
      }
    bfs({i,j});
   }
   cout<<ans;
 }
