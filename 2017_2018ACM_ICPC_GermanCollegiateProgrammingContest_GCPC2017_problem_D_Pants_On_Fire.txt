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
 
  map<string,vector<string>> gida;
  map<string,vector<string>> gvolta;
  unordered_set<string> vis;
bool dfs(const map<string,vector<string>> &g,const string &bad,const string &good){
    if (bad==good)
        return true;
    if (vis.count(bad))
        return false;
 
        vis.insert(bad);
        auto it = g.find(bad);
        if (it != g.end()){
            for(auto& adj : it->second)
        if (dfs(g,adj,good))
            return true;
        }
 
    return false;
}
 
int main()
{_
  int n,d,i;
  string bad,good,are,worse,than,statement;
  cin>>n>>d;
      cin.ignore();
      for(i=0;i<n;i++){
        getline(cin,statement);
        istringstream stream(statement);
        stream>>bad>>are>>worse>>than>>good;
        gida[bad].push_back(good);
        gvolta[good].push_back(bad);
      }
      for(i=0;i<d;i++){
        getline(cin,statement);
        istringstream stream(statement);
        stream>>bad>>are>>worse>>than>>good;
        vis.clear();
        if(dfs(gida,bad,good))
            cout<<"Fact"<<endl;
        else{
            vis.clear();
            if(dfs(gvolta,bad,good))
            cout<<"Alternative Fact"<<endl;
            else
            cout<<"Pants on Fire"<<endl;
        }
      }
 
}