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
 
vector<pair<ll,ll>> seg(50); 
int n,k;
bool check(ll x){
    ll sum=0,i;
    for(i=0;i<n;i++)
       if(seg[i].f<x)
           sum+=min(x-seg[i].f,seg[i].s-seg[i].f+1);
  return sum<=k;             
}
int main(){_ 
   int i;
   cin>>n>>k;
   for(i=0;i<n;i++)
       cin>>seg[i].f>>seg[i].s;
   ll l,r,m,ans;
   l=-2e9;
   r=2e9;
   while(l<=r){
       m=(l+r)/2;
       if(check(m)){
           ans=m;
           l=m+1;
       }
       else
           r=m-1;
   }
    cout<<ans;
  }
