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
 
 
int main(){_
 
   ll n,k,l,r,m,ans=0,soma,atual,maxpipes;
   cin>>n>>k;
   maxpipes=((k*k-k)/2)+1; 
   if(maxpipes<n){
       cout<<"-1";
       return 0;
   }
   if(n==1){
       cout<<"0";
       return 0;
   }
   l=1;
   r=k;
   while(l<=r){
       m=(l+r)/2;
       maxpipes=(m*(2*k-m-1)/2)+1;
       if(maxpipes<=n && m<=k-1){
           l=m+1;
           atual=m;
       }      
       else
           r=m-1;
   }
   soma=(atual*(2*k-atual-1)/2)+1;
   ans=atual;
   k-=atual;
   atual=0;        
   vector<bool> spliters(k,true);
   while(soma<n){
        l=2;
        r=k;
    while(l<=r){
    m=(l+r)/2;
    if(soma+m-1<=n && spliters[m]==true){
        atual=m;
        l=m+1;
    }
    else
       r=m-1;
   }
   if(spliters[atual]==false || soma+atual-1>n){
    cout<<"-1";
    return 0;
   }
   spliters[atual]=false;
   soma+=atual-1;
   ans++;
   atual=0;
   }
    cout<<ans;
}
