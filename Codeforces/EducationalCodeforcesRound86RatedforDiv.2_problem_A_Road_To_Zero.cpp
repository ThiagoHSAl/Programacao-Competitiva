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
 
long long int t,a,b,i,j,x,y,troca,preco;
    cin >> t;
    for(i=0;i<t;i++)
    {
        preco=0;
     cin>>x>>y>>a>>b;
     if(b<2*a)
     {
      if(y>x)
     {
         troca=y;
         y=x;
         x=troca;
     }
     preco+=(x-y)*a;
     preco+=y*b;
     cout<<preco<<endl;
     }
    else
    {
       preco+=(x+y)*a;
      cout<<preco<<endl;
    }
  }
}