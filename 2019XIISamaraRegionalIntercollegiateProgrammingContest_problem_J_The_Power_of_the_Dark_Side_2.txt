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
  ll n,a,b,c,i,l,r,m;
  cin>>n;
  vector<pair<ll,ll>> sum(n);
  vector<ll> battle(n);
  for(i=0;i<n;i++){
    cin>>a>>b>>c;
    sum[i].f=a+b+c;
    sum[i].s=sum[i].f-max(max(a,b),c)+2;
    battle[i]=sum[i].f-max(max(a,b),c)+2;
  }
  sort(battle.begin(),battle.end());
  //battle.push_back(LINF);
  for(i=0;i<n;i++){
    l=0;
    r=n;
    while(l<r){
      m=(l+r)/2;
      if(battle[m]>sum[i].f)
         r=m;
      else
        l=m+1;
    }
    if(l==0)
    cout<<"0 ";
    else if(sum[i].f>=sum[i].s)
    cout<<l-1<<" ";
    else
    cout<<l<<" ";
 
  }
  }