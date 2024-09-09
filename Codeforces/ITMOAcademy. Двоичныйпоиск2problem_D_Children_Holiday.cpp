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
#define MAX 1005
 
vector<vector<int>> ass(MAX);
vector<int> saida(MAX);
int baloons(int tempo,int m, bool print){
    int ans=0,baloon,ciclo,resto,t,y,z;
for (int i=0;i<m;i++){
    t=ass[i][0];
    z=ass[i][1];
    y=ass[i][2];
    ciclo=tempo/(t*z+y)*z;
    resto=(tempo%(t*z+y))/t;
    if(resto>z)
        resto=z;
    baloon=ciclo+resto;
    if(print)
    saida[i]=baloon;
    ans+=baloon;
}
 
     return ans;
}
int main()
{_
 
  int n,m,l,r,md,i,t,y,z,cheios=0;
 
  cin>>n>>m;
  for(i=0;i<m;i++){
    cin>>t>>z>>y;
    ass[i].push_back(t);
    ass[i].push_back(z);
    ass[i].push_back(y);
  }
  l=0;
  r=17e6;
  while(l<r){
    md=(l+r)/2;
    if(baloons(md,m,0)>=n)
        r=md;
    else
        l=md+1;
  }
   cout<<l<<endl;
   baloons(l,m,1);
   for(i=0;i<m;i++){
    if(cheios+saida[i]>n) {
            if(n > 0) {
                cout <<n-cheios<< " ";
                n=0;
            } else {
                cout <<"0 ";
            }
        } else {
            cout <<saida[i]<< " ";
        }
        cheios+=saida[i];
    }
    cout << "\n";
    return 0;
}