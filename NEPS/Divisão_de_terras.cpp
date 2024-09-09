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
vector<vector<int>> terras(MAX,vector<int>(4));
int check(int linha, int n, int k){
    int x1,x2,y1,y2,i,area,total=0;
    for(i=0;i<n;i++){
       x1=terras[i][0];
       y1=terras[i][1];
       x2=terras[i][2];
       y2=terras[i][3];
       if(min(y1,y2)<linha && max(y1,y2)>=linha)
        area=(linha-min(y1,y2))*(x2-x1);
       else if(linha>max(y1,y2))
        area=(y2-y1)*(x2-x1);
       else
        area=0;
       total+=area;
    }
    return total>=k;
}
int main(){_

  int l,r,m,i,n,k,ans=-1,miny=INF,maxy=-INF,x1,y1,x2,y2;
  cin>>n>>k;
  for(i=0;i<n;i++){
    cin>>x1>>y1>>x2>>y2;
    terras[i][0]=x1;
    terras[i][1]=y1;
    terras[i][2]=x2;
    terras[i][3]=y2;
    if(min(y1,y2)<miny)
        miny=min(y1,y2);
    if(max(y1,y2)>maxy)
        maxy=max(y1,y2);
  }
  l=miny;
  r=maxy;
  while(l<r){
    m=(l+r)/2;
    if(check(m,n,k)){
        ans=m;
        r=m;
    }
    else
        l=m+1;
  }
  if(ans!=-1)
    cout<<ans;
  else
    cout<<"PERDAO MEU REI";
}
