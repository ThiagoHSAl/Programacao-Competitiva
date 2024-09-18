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

vector<ll> fac(4);
ll tri(ll x)
{
    return (x+1)*x/2;
}

ll check(ll t){
    ll cel;
    cel=t*t+(t+1)*(t+1);
    if (t>fac[0])
        cel-=(t-fac[0])*(t-fac[0]);
    if (t>fac[1])
        cel-=(t-fac[1])*(t-fac[1]);
    if (t>fac[2])
        cel-=(t-fac[2])*(t-fac[2]);
    if (t>fac[3])
        cel-=(t-fac[3])*(t-fac[3]);
    if (t>fac[0]+fac[3])
        cel+=tri(t-(fac[0]+fac[3])-1);
    if (t>fac[0]+fac[2])
        cel+=tri(t-(fac[0]+fac[2])-1);
    if (t>fac[1]+fac[3])
        cel+=tri(t-(fac[1]+fac[3])-1);
    if (t>fac[1]+fac[2])
        cel+=tri(t-(fac[1]+fac[2])-1);
    return cel;
}


int main()
{_
   ll n,x,y,l,r,m,ans=0,c,i;
   cin>>n>>x>>y>>c;
   fac[0]=x-1;
   fac[1]=n-x;
   fac[2]=y-1;
   fac[3]=n-y;
   l=0;
   r=2*n;
   while(l<=r){
    m=(l+r)/2;
    if(check(m)>=c){
        ans=m;
        r=m-1;
    }
    else
        l=m+1;
   }
   cout<<ans;
  return 0;
}
