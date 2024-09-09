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
 
string complemento(string carta1, string carta2, int k)
{
    int i;
    string carta3(k,' '),comp;
    for(i=0;i<k;i++)
    {
        if(carta1[i]==carta2[i])
            carta3[i]=carta1[i];
        if(carta1[i]!=carta2[i])
        {
            comp="SET";
            comp.erase(comp.find(carta1[i]), 1);
            comp.erase(comp.find(carta2[i]), 1);
            carta3[i]=comp[0];
        }
    }
    return carta3;
}
 
/*int check(string carta1, string carta2, string carta3, int k)
{
  int i;
  for(i=0;i<k;i++)
  {
      if(!((carta1[i]==carta2[i]&&carta2[i]==carta3[i]) || (carta1[i]!=carta2[i]&&carta2[i]!=carta3[i]&&carta3[i]!=carta1[i])))
      return 0;
  }
  return 1;
}*/
int main()
{_
    string carta;
    int n,k,i,j,contador=0;
    cin>>n>>k;
    set<string> baralho;
    vector<string> deck(n);
    for(i=0;i<n;i++)
    {
      cin>>deck[i];
      baralho.insert(deck[i]);
    }
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        carta=complemento(deck[i],deck[j],k);
        if(baralho.find(carta)!=baralho.end())
        contador++;
 
    }
 cout<<contador/3;
}