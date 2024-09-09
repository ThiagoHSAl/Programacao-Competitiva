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
 
int main()
{_
 
  float n,m,d,i,j,k,l=0,plataformas=0,salto,diferenca;
  cin>>n>>m>>d;
  vector<int> c(m);
  for(i=0;i<m;i++)
  {
    cin>>c[i];
    plataformas+=c[i];
  }
  salto = ceil(((n - plataformas) / (m + 1)) + 1);
  diferenca=(salto-1)*(m+1)+plataformas-n;
  if(salto>d)
    cout<<"NO";
  else{
        cout<<"YES"<<endl;
    for(i=0;i<m;i++)
    {
        for(k=0;k<salto-1;k++)
        {
          if(l>=diferenca)
          cout<<"0 ";
          l++;
        }
         for(j=0;j<c[i];j++)
          cout<<i+1<<" ";
    }
 
     for(k=0;k<salto-1;k++)
      cout<<"0 ";
  }
 
}