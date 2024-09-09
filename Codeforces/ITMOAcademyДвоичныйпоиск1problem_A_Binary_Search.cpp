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
    int n,k,l,r,m,vk,i;
        cin>>n>>k;
    vector<int> vn(n);
    for(i=0;i<n;i++)
        cin>>vn[i];
    for(i=0;i<k;i++)
    {
     cin>>vk;
     l=0;
     r=n-1;
     while(l<r)
     {
       m=(l+r)/2;
       if(vn[m]>=vk)
       r=m;
       else
       l=m+1;
     }
     if(vn[l]==vk)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    }
        
    return 0;
}