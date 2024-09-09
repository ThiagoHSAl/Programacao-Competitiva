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
 
 
int main(){_
    ll t,n,k,i,l,r,m;
    vector<int> v;       
           cin>>t;
           for(i=0;i<t;i++){
               cin>>n>>k;
               l=0;
               r=2e9+10;
               while(l<r){
                   m=(l+r)/2;
                   if(m-(m/n)>=k)
                       r=m;
                   else
                       l=m+1;
               }
               cout<<l<<endl;
           }
 
    return 0;
}
