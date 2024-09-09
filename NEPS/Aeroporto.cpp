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
  int a,v,i,saida,destino,teste=1,MAX=0;
  while(true){
    cin>>a>>v;
    if(a==0 && v==0)
        break;
    MAX=0;
    vector<int> g(a+1,0);
    for(i=0;i<v;i++){
        cin>>saida>>destino;
        g[saida]++;
        g[destino]++;
    }
    for(i=1;i<=a;i++)
        if(g[i]>MAX)
            MAX=g[i];
    cout<<"Teste"<<" "<<teste<<endl;
   for(i=1;i<=a;i++)
        if(g[i]>=MAX)
        cout<<i<<" ";
   cout<<endl<<endl;
   teste++;
  }


}
