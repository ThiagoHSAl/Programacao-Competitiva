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
   int i,n,k,l,r,m,q1,q2,ans;
   cin>>n;
   vector<int> vn(n);
   for(i=0;i<n;i++)
    cin>>vn[i];
    sort(vn.begin(),vn.end());
   cin>>k;
   for(i=0;i<k;i++)
   {
       ans=0;
       cin>>q1>>q2;
       l=0;
       r=n-1;
       while(l<=r)
       {
           m=(l+r)/2;
           if(vn[m]>=q1)
            r=m-1;
           else
            l=m+1;
       }
       q1=l;
       l=0;
       r=n-1;
       while(l<=r)
       {
           m=(l+r)/2;
           if(vn[m]<=q2)
            l=m+1;
           else
            r=m-1;
       }
       q2=r;
       ans=q2-q1+1;
       cout<<ans<<" ";
   }
}
 