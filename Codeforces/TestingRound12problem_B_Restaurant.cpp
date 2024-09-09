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
 
bool cmp (pair <int,int> a,pair<int,int> b)
{
    return a.s<b.s;
}
 
int main()
{_
 
 int n,i,contador=0,ordere;
 cin>>n;
 vector <pair<int,int>> orders(n);
 for(i=0;i<n;i++)
 {
     cin>>orders[i].f>>orders[i].s;
 }
 sort(orders.begin(),orders.end(),cmp);
 ordere=-1;
for(i=0;i<n;i++)
{
  if(orders[i].f>ordere)
  {
      ordere=orders[i].s;
      contador++;
  }
}
cout<<contador;
}