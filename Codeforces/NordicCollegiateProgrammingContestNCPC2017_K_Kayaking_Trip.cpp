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
#define MAX 5e4+10

vector<int> kaiaks;
int s,m,w;
bool check(int v,int kw,int km, int ks){
    int i;
    for(i=0;i<kaiaks.size();i++){
        if(kw>=2 && kaiaks[i]*2*w>=v)
            kw-=2;
        else if(kw>0 && km>0 && kaiaks[i]*(w+m)>=v){
            kw--;
            km--;
        }
        else if(kw>0 && ks>0 && kaiaks[i]*(w+s)>=v){
            kw--;
            ks--;
        }
        else if(km>=2 && kaiaks[i]*2*m>=v)
            km-=2;
        else if(km>0 && ks>0 && kaiaks[i]*(m+s)>=v){
            km--;
            ks--;
        }
       else if(ks>=2 && kaiaks[i]*2*s>=v)
            ks-=2;
       else
            return false;
    }
    return true;
}
int main()
{_
   int n,l,r,md,ans=0,i,kaiak,maxkaiak=-INF,minkaiak=INF,kw,km,ks;
   cin>>kw>>km>>ks;
   n=(kw+km+ks)/2;
   cin>>w>>m>>s;
   for(i=0;i<n;i++){
    cin>>kaiak;
    if(kaiak>maxkaiak)
        maxkaiak=kaiak;
    if(kaiak<minkaiak)
        minkaiak=kaiak;
    kaiaks.push_back(kaiak);
   }
   sort(kaiaks.begin(),kaiaks.end());
   l=minkaiak*2*w;
   r=maxkaiak*2*s;
   while(l<=r){
    md=(l+r)/2;
    if(check(md,kw,km,ks)){
        l=md+1;
        ans=md;
    }
    else
        r=md-1;
   }
   cout<<ans;
}
