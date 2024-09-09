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
#define MAX 1e5
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;
vector<vector<double>> pessoas(MAX,vector<double>(2));
bool check(double n, double tempo){
    double i,minx1=INF,maxx2=-INF,left,right;
 for(i=0;i<n;i++){
    left=pessoas[i][0]-pessoas[i][1]*tempo;
    right=pessoas[i][0]+pessoas[i][1]*tempo;
    minx1=min(minx1,right);
    maxx2=max(maxx2,left);
 }
  return minx1>=maxx2;
}
int main(){_
  double n,i,x,v,l,r,m,eps=1e-6;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>x>>v;
    pessoas[i][0]=x;
    pessoas[i][1]=v;
  }
 l=0;
 r=1e9;
 while(r-l>eps){
    m=(l+r)/2.0;
    if(check(n,m))
        r=m;
    else
        l=m;
 }
 cout.precision(8);
 cout<<fixed<<((l+r)/2);
}